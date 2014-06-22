//
//  MasterViewController.h
//  TouchIOS
//
//  Created by Christian Bieniak on 22/06/2014.
//  Copyright (c) 2014 BienOwen. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
