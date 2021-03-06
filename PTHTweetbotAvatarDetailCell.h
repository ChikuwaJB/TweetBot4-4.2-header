/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <Tweetbot/PTHTweetbotCell.h>

@class PTHTweetbotAvatarView, UILabel, PTHHitInsetButton, UIImageView, _PTHVerticalLabelsContainer, UIView, NSString, PTHTweetbotUser;

@interface PTHTweetbotAvatarDetailCell : PTHTweetbotCell {

	PTHTweetbotAvatarView* _avatarView;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	PTHHitInsetButton* _button;
	UIImageView* _disclosureView;
	_PTHVerticalLabelsContainer* _textContainerView;

}

@property (nonatomic,retain) PTHTweetbotAvatarView * avatarView;                  //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,readonly) UIView * textContainerView; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * detailText; 
@property (nonatomic,readonly) UIImageView * disclosureView; 
@property (nonatomic,readonly) PTHHitInsetButton * button; 
@property (nonatomic,readonly) unsigned long long colorControlState; 
@property (nonatomic,readonly) PTHTweetbotUser * user; 
+(double)cellHeightWithItem:(id)arg1 forTableView:(id)arg2 ;
+(double)separatorOffset;
+(CGSize)avatarSize;
+(double)textHeight;
-(unsigned long long)colorControlState;
-(void)colorThemeDidChange;
-(UIImageView *)disclosureView;
-(PTHTweetbotUser *)user;
-(void)setDetailText:(NSString *)arg1 ;
-(NSString *)detailText;
-(PTHHitInsetButton *)button;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)textLabel;
-(id)detailTextLabel;
-(void)setAccessoryView:(id)arg1 ;
-(PTHTweetbotAvatarView *)avatarView;
-(void)setAvatarView:(PTHTweetbotAvatarView *)arg1 ;
-(UIView *)textContainerView;
@end

