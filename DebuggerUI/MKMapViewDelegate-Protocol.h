//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DebuggerUI/NSObject-Protocol.h>

@class MKAnnotationView, MKClusterAnnotation, MKMapView, MKOverlayRenderer, MKUserLocation, NSArray, NSError;
@protocol MKAnnotation, MKOverlay;

@protocol MKMapViewDelegate <NSObject>

@optional
- (MKClusterAnnotation *)mapView:(MKMapView *)arg1 clusterAnnotationForMemberAnnotations:(NSArray *)arg2;
- (void)mapView:(MKMapView *)arg1 didAddOverlayRenderers:(NSArray *)arg2;
- (MKOverlayRenderer *)mapView:(MKMapView *)arg1 rendererForOverlay:(id <MKOverlay>)arg2;
- (void)mapView:(MKMapView *)arg1 annotationView:(MKAnnotationView *)arg2 didChangeDragState:(unsigned long long)arg3 fromOldState:(unsigned long long)arg4;
- (void)mapView:(MKMapView *)arg1 didFailToLocateUserWithError:(NSError *)arg2;
- (void)mapView:(MKMapView *)arg1 didUpdateUserLocation:(MKUserLocation *)arg2;
- (void)mapViewDidStopLocatingUser:(MKMapView *)arg1;
- (void)mapViewWillStartLocatingUser:(MKMapView *)arg1;
- (void)mapView:(MKMapView *)arg1 didDeselectAnnotationView:(MKAnnotationView *)arg2;
- (void)mapView:(MKMapView *)arg1 didSelectAnnotationView:(MKAnnotationView *)arg2;
- (void)mapView:(MKMapView *)arg1 didAddAnnotationViews:(NSArray *)arg2;
- (MKAnnotationView *)mapView:(MKMapView *)arg1 viewForAnnotation:(id <MKAnnotation>)arg2;
- (void)mapViewDidFinishRenderingMap:(MKMapView *)arg1 fullyRendered:(BOOL)arg2;
- (void)mapViewWillStartRenderingMap:(MKMapView *)arg1;
- (void)mapViewDidFailLoadingMap:(MKMapView *)arg1 withError:(NSError *)arg2;
- (void)mapViewDidFinishLoadingMap:(MKMapView *)arg1;
- (void)mapViewWillStartLoadingMap:(MKMapView *)arg1;
- (void)mapView:(MKMapView *)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)mapView:(MKMapView *)arg1 regionWillChangeAnimated:(BOOL)arg2;
@end

