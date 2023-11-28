# Write your MySQL query statement below

#ifnull is a function in sql ifnull(exp,*value_if_null) if it is null then it will print this *

select ifnull((select distinct salary
from Employee
order by salary desc
limit 1
offset 1),null) as SecondHighestSalary;