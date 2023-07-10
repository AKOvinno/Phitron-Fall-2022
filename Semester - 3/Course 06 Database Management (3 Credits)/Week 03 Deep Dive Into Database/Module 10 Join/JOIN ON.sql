select employees.employee_id, employees.first_name, departments.department_name
from employees JOIN departments ON ( employees.department_id = departments.department_id );