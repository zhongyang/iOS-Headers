/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ADBannerDataDelegate-Protocol.h"
#import "PBRequesterDelegate-Protocol.h"

@class NSMapTable, NSMutableArray, NSTimer;

@interface ADAdServer : NSObject <PBRequesterDelegate, ADBannerDataDelegate>
{
    NSMutableArray *_activeRequesters;
    NSMutableArray *_pendingGroups;
    NSMapTable *_bannersToRequesters;
    NSTimer *_requiredPropertiesAcquisitionTimeout;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedAdServer;
@property(retain, nonatomic) NSTimer *requiredPropertiesAcquisitionTimeout; // @synthesize requiredPropertiesAcquisitionTimeout=_requiredPropertiesAcquisitionTimeout;
@property(retain, nonatomic) NSMapTable *bannersToRequesters; // @synthesize bannersToRequesters=_bannersToRequesters;
@property(retain, nonatomic) NSMutableArray *pendingGroups; // @synthesize pendingGroups=_pendingGroups;
@property(retain, nonatomic) NSMutableArray *activeRequesters; // @synthesize activeRequesters=_activeRequesters;
- (id)autorelease;
- (oneway void)release;
- (unsigned int)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)cancelRequestForBannerGroup:(id)arg1;
- (void)requestAdsForBannerGroup:(id)arg1;
- (void)bannerData:(id)arg1 didFailToLoad:(id)arg2;
- (void)bannerDataDidFinishLoading:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requester:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3;
- (void)_cleanupRequester:(id)arg1;
- (void)_handleRequiredPropertiesAcquisitionTimeout;
- (id)init;

@end
