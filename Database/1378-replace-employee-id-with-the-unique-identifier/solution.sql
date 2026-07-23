-- Write your PostgreSQL query statement below
-- A for Employee , e for EmployeeUNI
select unique_id ,name 
from Employees A
left join EmployeeUNI e
on A.id=e.id;