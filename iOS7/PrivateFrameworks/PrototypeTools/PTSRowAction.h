/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@interface PTSRowAction : NSObject <NSCopying>
{
    BOOL _deselectRowOnSuccess;
    id _handler;
}

+ (id)actionWithHandler:(id)arg1;
+ (id)action;
@property(nonatomic) BOOL deselectRowOnSuccess; // @synthesize deselectRowOnSuccess=_deselectRowOnSuccess;
@property(copy, nonatomic) id handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)resolveTemplatesWithIndex:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
