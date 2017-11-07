//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class CAAnimation, MDLCamera, NSArray, NSString, SCNMaterialProperty;

@protocol SCNCameraJSExport <JSExport>
+ (id)cameraWithMDLCamera:(MDLCamera *)arg1;
+ (id)camera;
@property(nonatomic) double focalDistance;
@property(nonatomic) double focalSize;
@property(nonatomic) double aperture;
@property(nonatomic) double yFov;
@property(nonatomic) double xFov;
@property(nonatomic) unsigned long long categoryBitMask;
@property(readonly, nonatomic) SCNMaterialProperty *colorGrading;
@property(nonatomic) double contrast;
@property(nonatomic) double saturation;
@property(nonatomic) double colorFringeIntensity;
@property(nonatomic) double colorFringeStrength;
@property(nonatomic) double vignettingIntensity;
@property(nonatomic) double vignettingPower;
@property(nonatomic) double bloomBlurRadius;
@property(nonatomic) double bloomIntensity;
@property(nonatomic) double bloomThreshold;
@property(nonatomic) double maximumExposure;
@property(nonatomic) double minimumExposure;
@property(nonatomic) double exposureAdaptationDarkeningSpeedFactor;
@property(nonatomic) double exposureAdaptationBrighteningSpeedFactor;
@property(nonatomic) BOOL wantsExposureAdaptation;
@property(nonatomic) double whitePoint;
@property(nonatomic) double averageGray;
@property(nonatomic) double exposureOffset;
@property(nonatomic) BOOL wantsHDR;
@property(nonatomic) double screenSpaceAmbientOcclusionNormalThreshold;
@property(nonatomic) double screenSpaceAmbientOcclusionDepthThreshold;
@property(nonatomic) double screenSpaceAmbientOcclusionBias;
@property(nonatomic) double screenSpaceAmbientOcclusionRadius;
@property(nonatomic) double screenSpaceAmbientOcclusionIntensity;
@property(nonatomic) double motionBlurIntensity;
@property(nonatomic) long long apertureBladeCount;
@property(nonatomic) double fStop;
@property(nonatomic) long long focalBlurSampleCount;
@property(nonatomic) BOOL wantsDepthOfField;
@property(nonatomic) double focalBlurRadius;
@property(nonatomic) double focusDistance;
@property(nonatomic) double orthographicScale;
@property(nonatomic) BOOL usesOrthographicProjection;
@property(nonatomic) BOOL automaticallyAdjustsZRange;
@property(nonatomic) double zFar;
@property(nonatomic) double zNear;
@property(nonatomic) double sensorHeight;
@property(nonatomic) double focalLength;
@property(nonatomic) long long projectionDirection;
@property(nonatomic) double fieldOfView;
@property(copy, nonatomic) NSString *name;
- (id)valueForKeyPath:(NSString *)arg1;
- (id)valueForKey:(NSString *)arg1;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (void)setValue:(id)arg1 forKeyPath:(NSString *)arg2;
- (id)copy;
- (void)resumeAnimationForKey:(NSString *)arg1;
- (void)pauseAnimationForKey:(NSString *)arg1;
- (CAAnimation *)animationForKey:(NSString *)arg1;
- (NSArray *)animationKeys;
- (void)removeAnimationForKey:(NSString *)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(CAAnimation *)arg1 forKey:(NSString *)arg2;
@property(nonatomic) struct CATransform3D projectionTransform;
@end

