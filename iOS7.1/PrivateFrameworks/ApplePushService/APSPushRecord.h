//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate;

@interface APSPushRecord : NSObject
{
    NSData *_token;
    NSDate *_date;
    NSData *_payloadHash;
}

@property(retain, nonatomic) NSData *payloadHash; // @synthesize payloadHash=_payloadHash;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSData *token; // @synthesize token=_token;
- (void)dealloc;
- (id)initWithToken:(id)arg1 date:(id)arg2 payloadHash:(id)arg3;

@end
