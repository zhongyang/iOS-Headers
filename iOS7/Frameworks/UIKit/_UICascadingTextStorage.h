/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSConcreteTextStorage.h"

@class NSDictionary, NSMutableDictionary;

// Not exported
@interface _UICascadingTextStorage : NSConcreteTextStorage
{
    NSMutableDictionary *_defaultAttributes;
}

+ (id)defaultFont;
- (void)_restoreOriginalFontAttribute;
- (_Bool)_shouldSetOriginalFontAttribute;
- (id)_defaultAttributes;
@property(copy, nonatomic) NSDictionary *defaultAttributes;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)dealloc;

@end

