-- Write your PostgreSQL query statement below
select Customers.name as Customers 
from Customers
left join Orders
on Customers.id=Orders.customerId
where Orders.customerId is  null ;