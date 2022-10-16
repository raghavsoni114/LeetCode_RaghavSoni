# Write your MySQL query statement below
SELECT user_id, concat(upper(LEFT(name, 1)), lower(RIGHT(name, length(name) - 1))) AS name FROM Users GROUP BY 1 ORDER BY 1;