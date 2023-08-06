from django.db import models

# Create your models here.
class Student(models.Model):
    name = models.CharField(max_length=20)
    roll = models.IntegerField(primary_key=True)
    address = models.TextField()
    # here we can give null=True so that user can keep it null
    # here we can also give blank=True so it doesn't need validation
    father_name = models.TextField(default="Rahim")
    
    
    