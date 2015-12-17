/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotMuteCell.h>

@class PTHTweetbotAvatarView, UILabel, PTHTweetbotUser;

@interface PTHTweetbotMuteUserCell : PTHTweetbotMuteCell {

	PTHTweetbotAvatarView* _avatarView;
	UILabel* _screenNameLabel;
	PTHTweetbotUser* _user;

}

@property (nonatomic,retain) PTHTweetbotUser * user;              //@synthesize user=_user - In the implementation block
-(id)initWithColorGroupName:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)_updateNames;
-(void)colorThemeDidChange;
-(PTHTweetbotUser *)user;
-(void)setUser:(PTHTweetbotUser *)arg1 ;
-(void)layoutSubviews;
-(void)setFilter:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
