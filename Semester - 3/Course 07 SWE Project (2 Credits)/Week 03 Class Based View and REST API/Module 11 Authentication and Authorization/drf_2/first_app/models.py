from django.db import models
from django.contrib.auth.models import User

# Create your models here.

class Product(models.Model):
    name = models.CharField(max_length=200)
    description = models.TextField()
    price = models.DecimalField(max_digits=10, decimal_places=2)
    def __str__(self):
        return self.name
    
class ProductReview(models.Model):
    # here many to one relationship: one produce many reviews
    product = models.ForeignKey(Product, on_delete=models.CASCADE, related_name='reviews') # here related name is reverse relationship
    user = models.ForeignKey(User, on_delete=models.CASCADE)
    # here first i is for database and second i for rating
    rating = models.IntegerField(choices=[(i, i) for i in range(1, 6)])
    review = models.TextField()
    created_at = models.DateTimeField(auto_now_add=True) # Django handling
    updated_at = models.DateField(auto_now=True)
    class Meta:
        unique_together = ('product', 'user') # one user can one comment
        
    def __str__(self):
        return f"{self.user.username} - {self.product.name} - Rating: {self.rating} - {self.review}"