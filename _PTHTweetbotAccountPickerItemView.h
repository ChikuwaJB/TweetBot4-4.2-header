/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIControl.h>

@class UILabel, PTHTweetbotAccount, NSString, PTHTweetbotAvatarView;

@interface _PTHTweetbotAccountPickerItemView : UIControl {

	UILabel* _nameLabel;
	UILabel* _screenNameLabel;
	PTHTweetbotAccount* _account;
	NSString* _colorGroupName;
	PTHTweetbotAvatarView* _avatarView;

}

@property (nonatomic,readonly) PTHTweetbotAccount * account;                    //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) NSString * colorGroupName;                       //@synthesize colorGroupName=_colorGroupName - In the implementation block
@property (nonatomic,readonly) PTHTweetbotAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
-(id)initWithAccount:(id)arg1 colorGroupName:(id)arg2 avatarDiameter:(double)arg3 ;
-(void)_userWasUpdated;
-(NSString *)colorGroupName;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(PTHTweetbotAvatarView *)avatarView;
-(void)stateDidChange;
-(PTHTweetbotAccount *)account;
@end
