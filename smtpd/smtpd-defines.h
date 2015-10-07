/*	$OpenBSD: smtpd-defines.h,v 1.3 2014/04/30 09:17:29 gilles Exp $	*/

/*
 * Copyright (c) 2013 Gilles Chehade <gilles@poolp.org>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef nitems
#define nitems(_a) (sizeof((_a)) / sizeof((_a)[0]))
#endif

#define	SMTPD_TABLENAME_SIZE	(64 + 1)
#define	SMTPD_TAG_SIZE		(32 + 1)

/* buffer sizes for email address components */
#define SMTPD_MAXLOCALPARTSIZE	(255 + 1)
#define SMTPD_MAXDOMAINPARTSIZE	(255 + 1)
#define	SMTPD_MAXMAILADDRSIZE	(255 + 1)

/* buffer size for virtual username (can be email addresses) */
#define	SMTPD_VUSERNAME_SIZE	SMTPD_MAXMAILADDRSIZE

#define SMTPD_USER		"_smtpd"
#define PATH_CHROOT		"/var/empty"
#define SMTPD_QUEUE_USER	"_smtpq"
#define SMTPD_QUEUE_GROUP	"_smtpq"
#define PATH_SPOOL		"/var/spool/smtpd"

#define TAG_CHAR		'+'
