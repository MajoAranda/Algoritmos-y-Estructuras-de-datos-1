-- EJERCICIO 1

--a) Verifica si un entero es cero
esCero :: Int -> Bool
esCero x = x==0

--b)verifica si un entero es estrictamente mayor a 0
esPositivo :: Int -> Bool
esPositivo x = x>0

--c) verifica si un car ́acter es una vocal en minúscula
esVocal :: Char -> Bool 
esVocal x = x=='a' || x=='e' || x=='i' || x=='o' || x=='u'

--EJERCICIO 2
--A) verifica que todos los elementos de una lista sean true
-- Es una función fold 

paratodo :: [Bool] -> Bool
paratodo [] = True
paratodo (x:xs) | x == True = paratodo xs
                | otherwise = False

--B) calcula la suma de todos los elementos de una lista de enteros. Es una función fold

sumatoria :: [Int] -> Int
sumatoria [] = 0
sumatoria (x:xs) = x + sumatoria xs

--C) calcula el producto de todos los elementos de la lista de enteros

productoria :: [Int] -> Int
productoria [] = 1
productoria (x:xs) = x * productoria xs

--D) toma un numero n y calcula n!
factorial :: Int -> Int
factorial 0 = 1
factorial n = n * factorial (n-1)
--E) toma una lista de numeros no vacia y calcula el valor promedio
promedio :: [Int] -> Int
promedio xs = div (sumatoria xs) (length xs)

--EJERCICIO 3 
pertenece :: Int -> [Int] -> Bool
pertenece n [] = True
pertenece n (x:xs)  = (x==n) ||  (pertenece n xs)

--EJERCICIO 4
--A)
paratodo' :: [a] -> (a -> Bool) -> Bool
paratodo' [] f = True
paratodo' (x:xs) f = f x && paratodo' xs f

--B)
existe' :: [a] -> (a -> Bool) -> Bool
existe' [] f = False
existe' (x:xs) f = f x || existe' xs f

--C) 
sumatoria' :: [a] -> (a -> Int) -> Int
sumatoria' [] f = 0
sumatoria' (x:xs) f = f x + sumatoria' xs f

--D)
productoria' :: [a] -> (a -> Int) -> Int
productoria' [] f = 1
productoria' (x:xs) f = f x * productoria' xs f

--EJERCICIO 5
paratodo'' :: [Bool] -> Bool
paratodo'' xs = paratodo' xs id

--EJERCICIO 6
--A)
todospares :: [Int] -> Bool
todospares xs = paratodo' xs even 

--B)
haymultiplo :: Int -> [Int] -> Bool
haymultiplo n xs = existe' xs (p n)
p :: Int -> Int -> Bool
p n x = mod x n == 0

--C)
sumacuadrados :: Int -> Int
sumacuadrados n = sumatoria' [0..n] (^n)

--D)
factorial' :: Int -> Int
factorial' x = productoria' [1..x] id

--E)
solopares :: [Int] -> [Int]
solopares [] = []
solopares (x:xs) |(mod x 2 == 0 ) = x:solopares xs
                 |otherwise = solopares xs
multiplicapares :: [Int] -> Int
multiplicapares xs = productoria' (solopares xs) id

--EJERCICIO 7
--A) MAP: devuelven una lista del mismo tamaño donde se les aplicó una funcción a cada elemento. FILTER : devuelven una lista de menor tamaño donde a cada elemento se les aplicó una función
--B) [2,-3,7,3,-7]
--C) [1,6,2]

--EJERCICIO 8
--A) 
duplicado :: [Int] -> [Int]
duplicado [] = []
duplicado (x:xs) = x*2 : duplicado xs 

--B)
duplicado' :: [Int] -> [Int]
duplicado' xs = map (*2) xs 

--EJERCICIO 9
--A)
listadepares :: [Int] -> [Int]
listadepares [] = []
listadepares (x:xs) |(mod x 2 == 0) = x : listadepares xs
                    |otherwise = listadepares xs

--B)
listadepares' :: [Int] -> [Int]
listadepares' xs = filter (even) xs

--C) 
multiplicapares' :: [Int] -> Int
multiplicapares' xs = productoria' (filter (even) xs) id

--EJERCICIO 10
--A)
primigualesA :: (Eq a) => a -> [a] -> [a]
primigualesA n [] = []
primigualesA n (x:xs) | (n == x) = x: primigualesA n xs
                     |otherwise = []

--B)
primigualesA' :: (Eq a) => a -> [a] -> [a]
primigualesA' m xs = takeWhile (==m) xs


--EJRCICIO 11
--A) 
primIguales :: (Eq a) => [a] -> [a]
primIguales [] = []
primIguales [x] = [x]
primIguales (x:y:xs) | (x == y) = x : primIguales (y:xs)
                     |otherwise = [x]


--B)
primIguales' :: (Eq a) => [a] -> [a]

primIguales' xs  |xs == [] = xs

                 |xs /= [] = primigualesA (head xs)  xs