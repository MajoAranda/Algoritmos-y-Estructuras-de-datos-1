--EJERCICIO 1
--A
data Carrera = Matematica | Fisica | Computacion | Astronomia
--B
titulo :: Carrera -> String
titulo Matematica = "Licenciatura en Matematica Aplicada"
titulo Fisica = "Licenciatura en Fisica"
titulo Computacion = "Licenciatura en Ciencias de la Computacion"
titulo Astronomia = "Licenciatura en Astronomia"
--C
data NotaBasica = Do | Re | Mi | Fa | Sol | La | Si deriving (Show, Eq, Ord)
--D
cifradoAmericano :: NotaBasica -> Char
cifradoAmericano Do = 'C'
cifradoAmericano Re = 'D'
cifradoAmericano Mi = 'E'
cifradoAmericano Fa = 'F'
cifradoAmericano Sol = 'G'
cifradoAmericano La = 'A'
cifradoAmericano Si = 'B'

--EJERCICIO 2 
--SE COMPLETA EN EL INCISO C
 
--EJERCICIO 3
--A)

minimoelemento :: Ord a => [a] -> a 
minimoelemento [x] = x
minimoelemento (x:xs) = min x (minimoelemento xs)

--B)
minimoelemento' :: (Bounded a , Ord a) => [a] -> a 
minimoelemento' [] = minBound
minimoelemento' (x:xs) = min x (minimoelemento' xs)

--C) minimoelemento [Fa, La, Sol, Re, Fa] = Re

--EJERCICIO 4
--A)
type Ingreso = Int

data Cargo = Titular | Asociado | Adjunto | Asistente | Auxiliar deriving (Eq)

data Area = Administrativa | Ensenanza | Economica | Postgrado


data Persona = Decane 
               | Docente Cargo 
               | NoDocente Area
               | Estudiante Carrera Ingreso 

--B)
--Docente :: Cargo -> Persona

--C)
--voy a definir una función que compare si 2 cargos son iguales, para eso agrego deriving eq al tipo cargo

cargosiguales :: Cargo -> Cargo -> Bool
cargosiguales Titular Titular = True
cargosiguales Asociado Asociado = True
cargosiguales Adjunto Adjunto = True
cargosiguales Asistente Asistente = True
cargosiguales Auxiliar Auxiliar = True
cargosiguales _ _ = False

cuantos_doc :: [Persona] -> Cargo -> Int 
cuantos_doc [] c = 0
cuantos_doc ((Docente c'):xs) c | cargosiguales c c' = 1 + cuantos_doc xs c                             | otherwise = cuantos_doc xs c

cuantos_doc (_:xs) c = cuantos_doc xs c

--d)
cuantos_doc' :: [Persona] -> Cargo -> Int
cuantos_doc' xs c = length (filter es_docente_con_cargo xs)
  where
    es_docente_con_cargo (Docente c') = cargosiguales c c'
    es_docente_con_cargo _ = False


--EJERICIO 4

--A)
data Alteracion = Bemol | Sostenido | Natural 
data NotaMusical = Nota NotaBasica Alteracion 

sonido :: NotaBasica -> Int
sonido Do = 1
sonido Re = 3
sonido Mi = 5
sonido Fa = 6
sonido Sol = 8
sonido La = 10
sonido Si = 12

--B)
sonidoCromatico :: NotaMusical -> Int
sonidoCromatico (Nota n a) = case a of 
                                     Bemol -> sonido n -1 
                                     Sostenido -> sonido n +1 
                                     Natural -> sonido n

--C)
instance Eq NotaMusical where
  (Nota n a) == (Nota n' a') = sonidoCromatico (Nota n a) == sonidoCromatico (Nota n' a')


--D)
instance Ord NotaMusical where
  (Nota n a) <= (Nota n' a') = sonidoCromatico (Nota n a) <= sonidoCromatico (Nota n' a')

  --EJERCICIO 6
primerElemento :: [ a ] -> Maybe a
primerElemento [] = Nothing
primerElemento (x:xs) = Just x 

  --EJERCICIO 7
--A)
data Cola = VaciaC | Encolada Persona Cola
atender :: Cola -> Maybe Cola
atender VaciaC = Nothing
atender (Encolada _ VaciaC) = Just VaciaC
atender (Encolada _ xs) = Just xs

--B)
encolar :: Persona -> Cola -> Cola
encolar p VaciaC = Encolada p VaciaC
encolar p (Encolada x xs) = Encolada p (Encolada x xs)

--C)

cargo :: Persona ->  Cargo
cargo (Docente c) =  c


busca :: Cola -> Cargo -> Maybe Persona
busca VaciaC _ = Nothing
busca (Encolada p xs) c' | (cargo p == c') = Just p
                         | otherwise = busca xs c'

--EJERCICIO 8
data ListaAsoc a b = Vacia | Nodo a b ( ListaAsoc a b )
type Diccionario = ListaAsoc String String
type Padron = ListaAsoc Int String

--a) 
type GuiaTelefonica = ListaAsoc String Int 

--b)

la_long :: ListaAsoc a b -> Int
la_long Vacia = 0
la_long (Nodo _ _ xs) = 1 + la_long xs 

la_concat :: ListaAsoc a b -> ListaAsoc a b -> ListaAsoc a b
la_concat Vacia ys = ys
la_concat (Nodo x y xs) ys = Nodo x y (la_concat xs ys)

la_agregar :: Eq a => ListaAsoc a b -> a -> b -> ListaAsoc a b
la_agregar Vacia j m = Nodo j m Vacia
la_agregar (Nodo j' m' xs) j m'  | (j' == j) = Nodo j m xs
                                | otherwise = Nodo j' m' (la_agregar xs j m)

la_pares :: ListaAsoc a b -> [(a, b)]
la_pares Vacia = []
la_pares (Nodo j m xs) = (j, m) : (la_pares xs)


la_busca :: Eq a => ListaAsoc a b -> a -> Maybe b
la_busca Vacia _ = Nothing
la_busca (Nodo x y xs) c  | (x == c) = Just y
                          | otherwise = la_busca xs c

la_borrar :: Eq a => a -> ListaAsoc a b -> ListaAsoc a b
la_borrar _ Vacia = Vacia
la_borrar k (Nodo k' m l) | (k == k') = l
                          | otherwise = la_borrar k l 


--instance Show Numeracion where
--  show Cero = "0"
--  show Uno = "1"
 -- show Dos = "2"
--  show Tres = "3"
 -- show Cuatro = "4"

 