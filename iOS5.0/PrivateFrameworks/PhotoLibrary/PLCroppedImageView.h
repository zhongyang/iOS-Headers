/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UIImage, UIImageView;

@interface PLCroppedImageView : UIView
{
    UIImageView *_imageView;
    struct CGRect _cropRect;
}

- (void)setFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIImage *image;
@property(nonatomic) struct CGRect cropRect;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
