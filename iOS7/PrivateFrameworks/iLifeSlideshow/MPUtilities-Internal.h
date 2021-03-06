/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MPUtilities.h>

@interface MPUtilities (Internal)
+ (id)parentsOfObject:(id)arg1;
+ (id)createPlugInSlide:(id)arg1 forLayer:(id)arg2 inDocument:(id)arg3;
+ (id)createPlugInContainer:(id)arg1 forLayer:(id)arg2 key:(id)arg3 inDocument:(id)arg4;
+ (void)collectAllActionableLayers:(id)arg1 inDictionary:(id)arg2;
+ (id)createMCAction:(id)arg1 forPlug:(id)arg2 withKey:(id)arg3;
+ (_Bool)pathIsRelative:(id)arg1;
+ (id)createPlugPathToObject:(id)arg1 inDocument:(id)arg2;
+ (id)createPlugPathToContainer:(id)arg1 inDocument:(id)arg2;
+ (void)registerUndoForDocument:(id)arg1 toReceiver:(id)arg2 withSelector:(SEL)arg3 object:(id)arg4;
+ (struct CGColor *)blackCGColor;
+ (struct CGColorSpace *)newColorSpaceForDevice;
+ (struct CGColor *)CGColorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)stringFromCGColor:(struct CGColor *)arg1;
+ (struct CGColor *)CGColorFromString:(id)arg1;
+ (id)stringWithNewUUID;
+ (id)executeScript:(id)arg1 withHeader:(id)arg2 andAttributes:(id)arg3;
@end

