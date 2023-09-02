from rest_framework import viewsets
from . import models, serializers
from rest_framework.permissions import IsAuthenticated,IsAuthenticatedOrReadOnly
from . import permissions
from django_filters.rest_framework import DjangoFilterBackend
from rest_framework import filters
from . import paginations

class ProductViewSet(viewsets.ModelViewSet):
    permission_classes = [permissions.AdminOrReadOnly]
    queryset = models.Product.objects.all()
    serializer_class = serializers.ProductSerializer
    
    # Django search filter
    # filter_backends = [filters.SearchFilter]
    # search_fields = ['name', 'description']

    # Django ordering and we can't use it if we do cursor pagination
    # filter_backends = [filters.OrderingFilter]
    # ordering_fields = ['price']
    # If we write -price in postman it will show in descending order
    
    # Pagination
    # pagination_class = paginations.ProductPagination
    # pagination_class = paginations.ProductLimitOffsetPagination
    
    # All the other filters will be off for doing cursor pagination
    pagination_class = paginations.ProductCursorPagination
    

class ProductReviewViewSet(viewsets.ModelViewSet):
    permission_classes = [permissions.ReviewerOrReadOnly]
    queryset = models.ProductReview.objects.all()
    serializer_class = serializers.ProductReviewSerializer
    
    # Django filter backend
    filter_backends = [DjangoFilterBackend]
    filterset_fields = ['rating', 'product']
    
    # Django ordering
    filter_backends = [filters.OrderingFilter]
    ordering_fields = ['rating']
   
    # def get_queryset(self):
    #     queryset = models.ProductReview.objects.all()
    #     username = self.request.query_params.get('username')
    #     if username is not None:
    #         queryset = queryset.filter(user__username__icontains=username)
    #     return queryset
    