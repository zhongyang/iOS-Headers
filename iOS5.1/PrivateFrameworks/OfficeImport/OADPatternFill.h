/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADFill.h>

@class OADColor, OADPattern;

@interface OADPatternFill : OADFill
{
    OADColor *mFgColor;
    BOOL mIsFgColorOverridden;
    OADColor *mBgColor;
    BOOL mIsBgColorOverridden;
    OADPattern *mPattern;
    BOOL mIsPatternOverridden;
}

+ (id)defaultProperties;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDefaults;
- (void)setParent:(id)arg1;
- (id)fgColor;
- (void)setFgColor:(id)arg1;
- (BOOL)isFgColorOverridden;
- (id)bgColor;
- (void)setBgColor:(id)arg1;
- (BOOL)isBgColorOverridden;
- (id)pattern;
- (void)setPattern:(id)arg1;
- (BOOL)isPatternOverridden;
- (void)setColor:(id)arg1;
- (void)setStyleColor:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)namedImageDataWithBlipCollection:(id)arg1;

@end

