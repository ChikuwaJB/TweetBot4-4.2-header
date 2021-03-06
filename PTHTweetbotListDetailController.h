/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>

@class PTHTweetbotList, PTHTweetbotAvatarView, UILabel, UIImageView, NSMutableArray, PTHStaticSectionCell;

@interface PTHTweetbotListDetailController : PTHViewController {

	PTHTweetbotList* _list;
	PTHTweetbotAvatarView* _avatarView;
	UILabel* _nameLabel;
	UILabel* _descriptionLabel;
	UIImageView* _lockImageView;
	UILabel* _footnoteLabel;
	NSMutableArray* _textConstraints;
	PTHStaticSectionCell* _listMembersCell;
	PTHStaticSectionCell* _listFollowersCell;

}
-(void)showFollowers:(id)arg1 ;
-(void)showMembers:(id)arg1 ;
-(void)showProfile:(id)arg1 ;
-(void)_showController:(id)arg1 cell:(id)arg2 ;
-(void)loadView;
-(void)_update;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithList:(id)arg1 ;
@end

