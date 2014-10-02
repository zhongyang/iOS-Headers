//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSearchStandardCell.h"

@class NSOperation, UIImageView;

@interface SBSearchImageCell : SBSearchStandardCell
{
    UIImageView *_titleImageView;
    NSOperation *_fetchImageOperation;
}

+ (id)placeHolderImageForDomain:(unsigned int)arg1 result:(id)arg2 size:(struct CGSize)arg3;
+ (_Bool)supportsSection:(id)arg1 result:(id)arg2;
@property(retain, nonatomic) NSOperation *fetchImageOperation; // @synthesize fetchImageOperation=_fetchImageOperation;
@property(readonly, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
- (id)variableConstraints;
- (id)constantConstraints;
- (id)leftTextView;
- (id)leftView;
- (double)leftTextMargin;
- (double)imageWidth;
- (void)updateWithSection:(id)arg1 result:(id)arg2 traitCollection:(id)arg3;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
