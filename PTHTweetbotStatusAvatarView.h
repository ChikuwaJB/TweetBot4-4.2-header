/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <Tweetbot/PTHTweetbotStatusSubview.h>

@class PTHTweetbotAvatarView, UIImageView;

@interface PTHTweetbotStatusAvatarView : PTHTweetbotStatusSubview {

	PTHTweetbotAvatarView* _avatarView;
	UIImageView* _badgeView;

}
+(void)initialize;
-(void)colorAppearanceDidChange;
-(void)_updateBadges;
-(void)_updateColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setStatus:(id)arg1 ;
@end

