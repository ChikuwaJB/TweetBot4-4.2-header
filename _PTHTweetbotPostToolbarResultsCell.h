/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIControl.h>

@class UIView, NSLayoutConstraint, UILabel, PTHTweetbotAvatarView, UIImageView;

@interface _PTHTweetbotPostToolbarResultsCell : UIControl {

	UIView* _leftLine;
	UIView* _rightLine;
	BOOL _widthCell;
	id _result;
	NSLayoutConstraint* _textLeftConstraint;
	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	PTHTweetbotAvatarView* _avatarView;
	UIImageView* _imageView;

}

@property (nonatomic,retain) id result;                                            //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textLeftConstraint;              //@synthesize textLeftConstraint=_textLeftConstraint - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                  //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailTextLabel;                            //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
@property (nonatomic,retain) PTHTweetbotAvatarView * avatarView;                   //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                              //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) BOOL widthCell;                                       //@synthesize widthCell=_widthCell - In the implementation block
+(double)widthForResult:(id)arg1 ;
+(id)entityTextForResult:(id)arg1 ;
-(void)setWidthCell:(BOOL)arg1 ;
-(NSLayoutConstraint *)textLeftConstraint;
-(void)setTextLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDetailTextLabel:(UILabel *)arg1 ;
-(BOOL)widthCell;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)accessibilityLabel;
-(UILabel *)textLabel;
-(UILabel *)detailTextLabel;
-(UIImageView *)imageView;
-(BOOL)isAccessibilityElement;
-(void)setImageView:(UIImageView *)arg1 ;
-(id)result;
-(void)setTextLabel:(UILabel *)arg1 ;
-(PTHTweetbotAvatarView *)avatarView;
-(void)setAvatarView:(PTHTweetbotAvatarView *)arg1 ;
-(void)setResult:(id)arg1 ;
@end

