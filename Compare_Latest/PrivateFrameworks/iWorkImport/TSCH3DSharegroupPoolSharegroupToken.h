/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DSharegroupToken.h>

#import "NSCopying-Protocol.h"

// Not exported
@interface TSCH3DSharegroupPoolSharegroupToken : TSCH3DSharegroupToken <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)token;
+ (id)_singletonAlloc;
- (_Bool)isOneShot;
- (void)flushTokenSharegroup;
- (void)deleteTokenSharegroup;
- (_Bool)shouldGarbageCollect;
- (void)releaseSharegroup:(id)arg1;
- (void)didRemoveAllInterests;
- (id)tokenSharegroup;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end
