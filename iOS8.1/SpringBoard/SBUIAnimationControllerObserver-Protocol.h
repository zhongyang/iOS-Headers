//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBUIAnimationController;

@protocol SBUIAnimationControllerObserver <NSObject>
- (void)animationControllerDidFinishAnimation:(SBUIAnimationController *)arg1;
- (void)animationController:(SBUIAnimationController *)arg1 willBeginAnimation:(_Bool)arg2;

@optional
- (void)animationControllerDidRevealApplication:(SBUIAnimationController *)arg1;
@end

