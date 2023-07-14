select e.name as Employee
from Employee e JOIN Employee m
ON (e.managerId = m.id) AND (e.salary > m.salary);