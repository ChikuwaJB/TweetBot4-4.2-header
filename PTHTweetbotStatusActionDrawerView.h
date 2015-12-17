/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, PTHButton, UIColor, PTHTweetbotStatus, UIViewController;

@interface PTHTweetbotStatusActionDrawerView : UIView {

	NSArray* _buttons;
	PTHButton* _actionButton;
	PTHButton* _replyButton;
	PTHButton* _retweetButton;
	PTHButton* _favoriteButton;
	PTHButton* _shareButton;
	UIColor* _favoritedTintColor;
	UIColor* _favoritedHighlightedTintColor;
	BOOL _favorited;
	PTHTweetbotStatus* _status;
	UIViewController* _viewController;

}

@property (nonatomic,retain) PTHTweetbotStatus * status;                            //@synthesize status=_status - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) UIColor * favoritedTintColor; 
@property (assign,getter=isFavorited,nonatomic) BOOL favorited;                     //@synthesize favorited=_favorited - In the implementation block
-(void)toggleFavorite;
-(void)reply:(id)arg1 ;
-(void)_retweet:(id)arg1 ;
-(void)_showRetweetLongOptions:(id)arg1 ;
-(void)_showFavoriteLongOptions:(id)arg1 ;
-(void)showShare:(id)arg1 ;
-(void)showActions:(id)arg1 ;
-(void)_showActionLongOptions:(id)arg1 ;
-(void)_updateFavorite;
-(id)_gradientTintColorWithAlpha:(double)arg1 ;
-(UIColor *)favoritedTintColor;
-(id)favoritedHighlightedTintColor;
-(BOOL)isFavorited;
-(void)setFavorited:(BOOL)arg1 ;
-(void)colorThemeDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(PTHTweetbotStatus *)status;
-(void)setStatus:(PTHTweetbotStatus *)arg1 ;
@end

