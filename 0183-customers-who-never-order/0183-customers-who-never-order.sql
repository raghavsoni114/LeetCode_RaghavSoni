# Write your MySQL query statement below
SELECT c.name as Customers FROM Customers c WHERE c.id NOT IN (SELECT o.CustomerID FROM Orders o);