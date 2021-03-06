/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface MBSnapshot : NSObject <NSCopying, NSCoding>
{
    unsigned long long _snapshotID;
    NSString *_deviceName;
    NSDate *_date;
    int _state;
    _Bool _isCompatible;
    NSString *_systemVersion;
    unsigned long long _quotaReserved;
}

@property(readonly, nonatomic) unsigned long long quotaReserved; // @synthesize quotaReserved=_quotaReserved;
@property(readonly, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(readonly, nonatomic) _Bool isCompatible; // @synthesize isCompatible=_isCompatible;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(readonly, nonatomic) unsigned long long snapshotID; // @synthesize snapshotID=_snapshotID;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSnapshotID:(unsigned long long)arg1 deviceName:(id)arg2 date:(id)arg3 state:(int)arg4 isCompatible:(_Bool)arg5 systemVersion:(id)arg6 quotaReserved:(unsigned long long)arg7;

@end

