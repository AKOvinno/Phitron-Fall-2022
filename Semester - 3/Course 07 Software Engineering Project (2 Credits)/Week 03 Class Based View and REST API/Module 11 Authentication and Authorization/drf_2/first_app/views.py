from rest_framework import viewsets
from . import models, serializers
from rest_framework.permissions import IsAuthenticated,IsAuthenticatedOrReadOnly
from rest_framework import filters
from . import permissions


class ProductViewSet(viewsets.ModelViewSet):
    permission_classes = [permissions.AdminOrReadOnly]
    queryset = models.Product.objects.all()
    serializer_class = serializers.ProductSerializer
    


class ProductReviewViewSet(viewsets.ModelViewSet):
    permission_classes = [permissions.ReviewerOrReadOnly]
    queryset = models.ProductReview.objects.all()
    serializer_class = serializers.ProductReviewSerializer
    filter_backends = [filters.OrderingFilter]
    ordering_fields = ['rating']
    
    