/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBRequest.h"

@class LBSGPlatformProfile, LBSGUserProfile, NSMutableArray;

@interface LBSGLocRequest : PBRequest
{
    LBSGPlatformProfile *_platformProfile;
    NSMutableArray *_appProfiles;
    LBSGUserProfile *_userProfile;
    NSMutableArray *_requestElements;
}

@property(retain, nonatomic) NSMutableArray *requestElements; // @synthesize requestElements=_requestElements;
@property(retain, nonatomic) LBSGUserProfile *userProfile; // @synthesize userProfile=_userProfile;
@property(retain, nonatomic) NSMutableArray *appProfiles; // @synthesize appProfiles=_appProfiles;
@property(retain, nonatomic) LBSGPlatformProfile *platformProfile; // @synthesize platformProfile=_platformProfile;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)requestElementsAtIndex:(unsigned int)arg1;
- (unsigned int)requestElementsCount;
- (void)addRequestElements:(id)arg1;
@property(readonly, nonatomic) BOOL hasUserProfile;
- (id)appProfilesAtIndex:(unsigned int)arg1;
- (unsigned int)appProfilesCount;
- (void)addAppProfiles:(id)arg1;
- (void)dealloc;

@end
