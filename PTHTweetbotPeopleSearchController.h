/*
* This header is generated by classdump-dyld 0.7
* on Friday, December 11, 2015 at 5:59:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3DB75626-9455-48D4-9D8D-D8CCA0F8B599/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <PTHCommon/PTHViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UISearchBarDelegate.h>

@class PTHTweetbotAccount, UITableView, PTHSearchBar, NSString, PTHTweetbotUser, NSArray;

@interface PTHTweetbotPeopleSearchController : PTHViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, UISearchBarDelegate> {

	PTHTweetbotAccount* _account;
	unsigned long long _options;
	UITableView* _tableView;
	PTHSearchBar* _searchBar;
	NSString* _searchText;
	PTHTweetbotUser* _selectedUser;
	NSArray* _users;

}

@property (nonatomic,copy) NSString * searchText;                         //@synthesize searchText=_searchText - In the implementation block
@property (nonatomic,retain) PTHTweetbotUser * selectedUser;              //@synthesize selectedUser=_selectedUser - In the implementation block
@property (nonatomic,retain) NSArray * users;                             //@synthesize users=_users - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAccount:(id)arg1 options:(unsigned long long)arg2 ;
-(PTHTweetbotUser *)selectedUser;
-(void)setSelectedUser:(PTHTweetbotUser *)arg1 ;
-(void)setSearchText:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)reloadData;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(NSString *)searchText;
-(NSArray *)users;
-(void)setUsers:(NSArray *)arg1 ;
@end

