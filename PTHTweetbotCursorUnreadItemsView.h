/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIControl.h>

@class UIView, NSLayoutConstraint, UILabel, NSString;

@interface PTHTweetbotCursorUnreadItemsView : UIControl {

	UIView* _contentView;
	NSLayoutConstraint* _contentPositionConstraint;
	UILabel* _countLabel;
	long long _unreadItemCount;
	double _position;
	NSString* _unreadItemCountString;

}

@property (assign,nonatomic) long long unreadItemCount;                     //@synthesize unreadItemCount=_unreadItemCount - In the implementation block
@property (assign,nonatomic) double position;                               //@synthesize position=_position - In the implementation block
@property (nonatomic,retain) NSString * unreadItemCountString;              //@synthesize unreadItemCountString=_unreadItemCountString - In the implementation block
-(void)setPosition:(double)arg1 animated:(BOOL)arg2 ;
-(long long)unreadItemCount;
-(void)setUnreadItemCount:(long long)arg1 ;
-(void)_updateCountLabel;
-(NSString *)unreadItemCountString;
-(void)setUnreadItemCountString:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setPosition:(double)arg1 ;
-(double)position;
@end
