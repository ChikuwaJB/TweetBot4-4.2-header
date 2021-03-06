/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotCell.h>

@class UIView, PTHHitInsetButton, UIImageView;

@interface PTHTweetbotLoadMoreCell : PTHTweetbotCell {

	UIView* _containerView;
	PTHHitInsetButton* _loadButton;
	UIImageView* _spinnerView;
	UIView* _leftOverlayView;
	UIView* _rightOverlayView;
	UIImageView* _middleOverlayView;
	BOOL _loading;
	BOOL _gap;

}

@property (assign,getter=isLoading,nonatomic) BOOL loading;                 //@synthesize loading=_loading - In the implementation block
@property (nonatomic,readonly) PTHHitInsetButton * loadButton;              //@synthesize loadButton=_loadButton - In the implementation block
@property (assign,getter=isGap,nonatomic) BOOL gap;                         //@synthesize gap=_gap - In the implementation block
-(PTHHitInsetButton *)loadButton;
-(BOOL)isGap;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)isLoading;
-(void)setGap:(BOOL)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
@end

