/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class PTHProgressView, UILabel, NSString;

@interface PTHTweetbotLoadingCell : UITableViewCell {

	PTHProgressView* _progressView;
	UILabel* _textLabel;

}

@property (nonatomic,copy) NSString * text; 
+(double)cellHeightWithItem:(id)arg1 forTableView:(id)arg2 ;
+(id)cellWithText:(id)arg1 ;
+(void)initialize;
+(id)reuseIdentifier;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithText:(id)arg1 ;
@end
