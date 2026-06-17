-- Write your PostgreSQL query statement below
select employee_id,department_id
from Employee
where primary_flag='Y'

union all

SELECT employee_id, MAX(department_id) 
FROM Employee
GROUP BY employee_id
HAVING COUNT(*) = 1;