//
//  ReviewCell.h
//  Hello
//
//  Created by Derek Chou on 2015/12/28.
//  Copyright © 2015年 Derek Chou. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CircleButton.h"

@interface ReviewCell : UITableViewCell

@property IBOutlet CircleButton *photoBtn;
@property IBOutlet UILabel *reviewLabel;
@property IBOutlet UILabel *reviewDTLabel;

@end
