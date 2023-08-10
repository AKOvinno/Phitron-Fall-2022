from django.db import models

# Create your models here.
class StudentModel(models.Model):
    roll = models.IntegerField(primary_key=True)
    name = models.CharField(max_length=20)
    father_name = models.CharField(max_length=30)
    address = models.TextField()
    # after creating this model we have to migrate it
    
    def __str__(self):
        return f"Roll : {self.roll} - {self.name}"
    
# Model inheritance
# 1. abstract base class
# 2. multitable inheritance
# 3. proxy model inheritance

# 1. abstract base class (objects can't be created)
class CommonInfoClass(models.Model):
    name = models.CharField(max_length=20)
    city = models.CharField(max_length=50)
    class Meta:
        abstract = True
    
class StudentInfoModel(CommonInfoClass):
    roll = models.IntegerField()
    payment = models.IntegerField()
    section = models.CharField(max_length=20)
    
    
class TeacherInfoModel(CommonInfoClass):
    salary = models.IntegerField()
    
# 2. multitable inheritance
class EmployeeModel(models.Model):
    name = models.CharField(max_length=30)
    city = models.CharField(max_length=40)
    designation = models.CharField(max_length=20)
    
class ManagerModel(EmployeeModel):
    take_interview = models.BooleanField()
    hiring = models.BooleanField()
    
# 3. proxy model
class Friend(models.Model): # friend is present in class
    school = models.CharField(max_length=40)
    section  = models.CharField(max_length=10)
    # class_teacher = models.CharField(max_length=20)
    attendance = models.BooleanField()
    hw = models.CharField(max_length=50)
    
class Me(Friend): # me not present in the class
    class Meta: 
        proxy = True
        ordering = ['id']

# One to One relationship 
class Person(models.Model):
    name = models.CharField(max_length=30)
    city = models.CharField(max_length=50)
    email = models.EmailField(max_length=30)
    def __str__(self):
        return self.name
    
class Passport(models.Model):
    user = models.OneToOneField(to=Person, on_delete = models.CASCADE)
    pass_number = models.IntegerField()
    page = models.IntegerField()
    validity = models.IntegerField()
    
    
