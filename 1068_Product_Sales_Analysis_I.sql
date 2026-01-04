-- 1st Way Using NATURAL JOIN --

SELECT Product.product_name,Sales.year,Sales.price
FROM
Product NATURAL JOIN Sales;



--2nd Way Using INNER JOIN with ON condition --


SELECT Product.product_name,Sales.year,Sales.price
FROM
Product JOIN Sales
ON Product.product_id = Sales.product_id;
