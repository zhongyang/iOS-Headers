/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet;

@interface _MFActivityMonitorMultiTarget : NSObject
{
    id _primaryTarget;
    NSMutableSet *_allTargets;
}

- (void)dealloc;
- (BOOL)addActivityTarget:(id)arg1;
- (BOOL)removeActivityTarget:(id)arg1;
- (id)primaryTarget;
- (void)setPrimaryTarget:(id)arg1;
- (id)allTargets;
- (id)displayName;

@end
