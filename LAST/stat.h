struct stat {
    dev_t st_dev;         /* device */
    ino_t st_ino;         /* inode number */
    mode_t st_mode;       /* file type and permissions */
    nlink_t st_nlink;     /* number of hard links */
    uid_t st_uid;         /* user ID of file owner */
    gid_t st_gid;         /* group ID of owner */
    dev_t st_rdev;        /* device type (if inode device) */
    off_t st_size;        /* total size, in bytes */
    blksize_t st_blksize; /* blocksize for filesystem I/O */
    blkcnt_t st_blocks;   /* number of 512-byte sectors */
    time_t st_atime;      /* time of last access */
    time_t st_mtime;      /* time of last modification */
    time_t st_ctime;      /* time of last status change */
};