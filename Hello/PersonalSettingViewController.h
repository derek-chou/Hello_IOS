//
//  PersonalSettingViewController.h
//  Hello
//
//  Created by Derek Chou on 2015/12/29.
//  Copyright © 2015年 Derek Chou. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIDownPicker.h"
#import "LPPopupListView.h"

@interface PersonalSettingViewController : UIViewController<UIScrollViewDelegate, LPPopupListViewDelegate, UITextFieldDelegate>
@property IBOutlet UIScrollView *scrollView;
@property IBOutlet UITextField *nameTextField;
@property IBOutlet UITextField *birtydayTextField;
@property IBOutlet UIDownPicker *cityPicker;
@property IBOutlet UITextField *langTextField;

@property NSMutableArray *langDescArray;
@property NSMutableIndexSet *langSelected;
@end
