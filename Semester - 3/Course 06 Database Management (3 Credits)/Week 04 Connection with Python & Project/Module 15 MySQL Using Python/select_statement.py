import mysql.connector

mydb = mysql.connector.connect(
    host="localhost",
    user="root",
    password="*$#Course@1998",
    database="hr"
)

mycursor = mydb.cursor()

# Create a table
sql_command = """
                SELECT * 
                FROM employees
                WHERE salary > 20000;
              """

mycursor.execute(sql_command)
data = mycursor.fetchall()

for i in data:
    print(i)