//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

@class NSLayoutConstraint, UILabel, UIView;

@interface ABGroupHeaderFooterView : UITableViewHeaderFooterView
{
    BOOL _editing;
    UILabel *_titleLabel;
    UIView *_topSeparatorView;
    UIView *_bottomSeparatorView;
    NSLayoutConstraint *_leftMarginConstraint;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(nonatomic) NSLayoutConstraint *leftMarginConstraint; // @synthesize leftMarginConstraint=_leftMarginConstraint;
@property(readonly, nonatomic) UIView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(readonly, nonatomic) UIView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)contentConstraints;
- (void)updateConstraints;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

