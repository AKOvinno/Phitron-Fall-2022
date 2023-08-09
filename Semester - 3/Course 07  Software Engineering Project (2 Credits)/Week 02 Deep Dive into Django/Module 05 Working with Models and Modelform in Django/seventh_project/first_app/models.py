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
    