// Copyright (C) 2022 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR LGPL-3.0-only OR GPL-2.0-only OR GPL-3.0-only

#include "qmargins.h"
#include "qdatastream.h"

#include <private/qdebug_p.h>

QT_BEGIN_NAMESPACE

/*!
    \class QMargins
    \inmodule QtCore
    \ingroup painting
    \since 4.6

    \compares equality
    \compareswith equality QMarginsF
    \endcompareswith

    \brief The QMargins class defines the four margins of a rectangle.

    QMargin defines a set of four margins; left, top, right, and bottom,
    that describe the size of the borders surrounding a rectangle.

    The isNull() function returns \c true only if all margins are set to zero.

    QMargin objects can be streamed as well as compared.
*/


/*****************************************************************************
  QMargins member functions
 *****************************************************************************/

/*!
    \fn QMargins::QMargins()

    Constructs a margins object with all margins set to 0.

    \sa isNull()
*/

/*!
    \fn QMargins::QMargins(int left, int top, int right, int bottom)

    Constructs margins with the given \a left, \a top, \a right, and \a bottom

    \sa setLeft(), setRight(), setTop(), setBottom()
*/

/*!
    \fn bool QMargins::isNull() const

    Returns \c true if all margins are is 0; otherwise returns
    false.
*/


/*!
    \fn int QMargins::left() const

    Returns the left margin.

    \sa setLeft()
*/

/*!
    \fn int QMargins::top() const

    Returns the top margin.

    \sa setTop()
*/

/*!
    \fn int QMargins::right() const

    Returns the right margin.
*/

/*!
    \fn int QMargins::bottom() const

    Returns the bottom margin.
*/


/*!
    \fn void QMargins::setLeft(int left)

    Sets the left margin to \a left.
*/

/*!
    \fn void QMargins::setTop(int Top)

    Sets the Top margin to \a Top.
*/

/*!
    \fn void QMargins::setRight(int right)

    Sets the right margin to \a right.
*/

/*!
    \fn void QMargins::setBottom(int bottom)

    Sets the bottom margin to \a bottom.
*/

/*!
    \fn bool QMargins::operator==(const QMargins &lhs, const QMargins &rhs)

    Returns \c true if \a lhs and \a rhs are equal; otherwise returns \c false.
*/

/*!
    \fn bool QMargins::operator!=(const QMargins &lhs, const QMargins &rhs)

    Returns \c true if \a lhs and \a rhs are different; otherwise returns \c false.
*/

/*!
    \fn QMargins operator+(const QMargins &m1, const QMargins &m2)
    \relates QMargins

    Returns a QMargins object that is the sum of the given margins, \a m1
    and \a m2; each component is added separately.

    \sa QMargins::operator+=(), QMargins::operator-=()

    \since 5.1
*/

/*!
    \fn QMargins operator-(const QMargins &m1, const QMargins &m2)
    \relates QMargins

    Returns a QMargins object that is formed by subtracting \a m2 from
    \a m1; each component is subtracted separately.

    \sa QMargins::operator+=(), QMargins::operator-=()

    \since 5.1
*/

/*!
    \fn QMargins operator+(const QMargins &lhs, int rhs)
    \relates QMargins

    Returns a QMargins object that is formed by adding \a rhs to
    \a lhs.

    \sa QMargins::operator+=(), QMargins::operator-=()

    \since 5.3
*/

/*!
    \fn QMargins operator+(int lhs, const QMargins &rhs)
    \relates QMargins

    Returns a QMargins object that is formed by adding \a lhs to
    \a rhs.

    \sa QMargins::operator+=(), QMargins::operator-=()

    \since 5.3
*/

/*!
    \fn QMargins operator-(const QMargins &lhs, int rhs)
    \relates QMargins

    Returns a QMargins object that is formed by subtracting \a rhs from
    \a lhs.

    \sa QMargins::operator+=(), QMargins::operator-=()

    \since 5.3
*/

/*!
    \fn QMargins operator*(const QMargins &margins, int factor)
    \relates QMargins

    Returns a QMargins object that is formed by multiplying each component
    of the given \a margins by \a factor.

    \sa QMargins::operator*=(), QMargins::operator/=()

    \since 5.1
*/

/*!
    \fn QMargins operator*(int factor, const QMargins &margins)
    \relates QMargins
    \overload

    Returns a QMargins object that is formed by multiplying each component
    of the given \a margins by \a factor.

    \sa QMargins::operator*=(), QMargins::operator/=()

    \since 5.1
*/

/*!
    \fn QMargins operator*(const QMargins &margins, qreal factor)
    \relates QMargins
    \overload

    Returns a QMargins object that is formed by multiplying each component
    of the given \a margins by \a factor.

    \sa QMargins::operator*=(), QMargins::operator/=()

    \since 5.1
*/

/*!
    \fn QMargins operator*(qreal factor, const QMargins &margins)
    \relates QMargins
    \overload

    Returns a QMargins object that is formed by multiplying each component
    of the given \a margins by \a factor.

    \sa QMargins::operator*=(), QMargins::operator/=()

    \since 5.1
*/

/*!
    \fn QMargins operator/(const QMargins &margins, int divisor)
    \relates QMargins

    Returns a QMargins object that is formed by dividing the components of
    the given \a margins by the given \a divisor.

    \sa QMargins::operator*=(), QMargins::operator/=()

    \since 5.1
*/

/*!
    \fn QMargins operator/(const QMargins &, qreal)
    \relates QMargins
    \overload

    Returns a QMargins object that is formed by dividing the components of
    the given \a margins by the given \a divisor.

    \sa QMargins::operator*=(), QMargins::operator/=()

    \since 5.1
*/

/*!
    \fn QMargins operator+(const QMargins &margins)
    \relates QMargins

    Returns a QMargin object that is formed from all components of \a margins.

    \since 5.3
*/

/*!
    \fn QMargins operator-(const QMargins &margins)
    \relates QMargins

    Returns a QMargin object that is formed by negating all components of \a margins.

    \since 5.1
*/

/*!
    \fn QMargins operator|(const QMargins &m1, const QMargins &m2)
    \relates QMargins

    Returns a QMargins object that is formed from the maximum of each
    component of \a m2 and \a m1.

    \sa QMargins::operator+=(), QMargins::operator-=()

    \since 6.0
*/

/*!
    \fn QMargins &QMargins::operator+=(const QMargins &margins)

    Add each component of \a margins to the respective component of this object
    and returns a reference to it.

    \sa operator-=()

    \since 5.1
*/

/*!
    \fn QMargins &QMargins::operator-=(const QMargins &margins)

    Subtract each component of \a margins from the respective component of this object
    and returns a reference to it.

    \sa operator+=()

    \since 5.1
*/

/*!
    \fn QMargins &QMargins::operator+=(int addend)
    \overload

    Adds the \a addend to each component of this object
    and returns a reference to it.

    \sa operator-=()
*/

/*!
    \fn QMargins &QMargins::operator-=(int subtrahend)
    \overload

    Subtracts the \a subtrahend from each component of this object
    and returns a reference to it.

    \sa operator+=()
*/

/*!
    \fn QMargins &QMargins::operator*=(int factor)

    Multiplies each component of this object by \a factor
    and returns a reference to it.

    \sa operator/=()

    \since 5.1
*/

/*!
    \fn QMargins &QMargins::operator*=(qreal factor)
    \overload

    Multiplies each component of this object by \a factor
    and returns a reference to it.

    \sa operator/=()

    \since 5.1
*/

/*!
    \fn QMargins &QMargins::operator/=(int divisor)

    Divides each component of this object by \a divisor
    and returns a reference to it.

    \sa operator*=()

    \since 5.1
*/

/*!
    \fn QMargins &QMargins::operator/=(qreal divisor)

    \overload

    \sa operator*=()

    \since 5.1
*/

/*!
    \fn QMargins::toMarginsF() const
    \since 6.4

    Returns these margins as margins with floating point accuracy.

    \sa QMarginsF::toMargins()
*/

/*****************************************************************************
  QMargins stream functions
 *****************************************************************************/
#ifndef QT_NO_DATASTREAM
/*!
    \fn QDataStream &operator<<(QDataStream &stream, const QMargins &m)
    \relates QMargins

    Writes margin \a m to the given \a stream and returns a
    reference to the stream.

    \sa {Serializing Qt Data Types}
*/

QDataStream &operator<<(QDataStream &s, const QMargins &m)
{
    s << m.left() << m.top() << m.right() << m.bottom();
    return s;
}

/*!
    \fn QDataStream &operator>>(QDataStream &stream, QMargins &m)
    \relates QMargins

    Reads a margin from the given \a stream into margin \a m
    and returns a reference to the stream.

    \sa {Serializing Qt Data Types}
*/

QDataStream &operator>>(QDataStream &s, QMargins &m)
{
    int left, top, right, bottom;
    s >> left; m.setLeft(left);
    s >> top; m.setTop(top);
    s >> right; m.setRight(right);
    s >> bottom; m.setBottom(bottom);
    return s;
}
#endif // QT_NO_DATASTREAM

#ifndef QT_NO_DEBUG_STREAM
QDebug operator<<(QDebug dbg, const QMargins &m)
{
    QDebugStateSaver saver(dbg);
    dbg.nospace();
    dbg << "QMargins" << '(';
    QtDebugUtils::formatQMargins(dbg, m);
    dbg << ')';
    return dbg;
}
#endif

/*!
    \class QMarginsF
    \inmodule QtCore
    \ingroup painting
    \since 5.3

    \compares equality
    \compareswith equality QMargins
    \endcompareswith

    \brief The QMarginsF class defines the four margins of a rectangle.

    QMarginsF defines a set of four margins; left, top, right, and bottom,
    that describe the finite size of the borders surrounding a rectangle.

    The isNull() function returns \c true only if all margins are very close to zero.

    QMarginsF objects can be streamed as well as compared.
*/


/*****************************************************************************
  QMarginsF member functions
 *****************************************************************************/

/*!
    \fn QMarginsF::QMarginsF()

    Constructs a margins object with all margins set to 0.

    \sa isNull()
*/

/*!
    \fn QMarginsF::QMarginsF(qreal left, qreal top, qreal right, qreal bottom)

    Constructs margins with the given \a left, \a top, \a right, and \a bottom.
    All parameters must be finite.

    \sa setLeft(), setRight(), setTop(), setBottom()
*/

/*!
    \fn QMarginsF::QMarginsF(const QMargins &margins)

    Constructs margins copied from the given \a margins.

    \sa QMargins::toMarginsF()
*/

/*!
    \fn bool QMarginsF::isNull() const

    Returns \c true if all margins are very close to 0; otherwise returns
    false.

    \sa {<QtNumeric>::}{qFuzzyIsNull()}
*/


/*!
    \fn qreal QMarginsF::left() const

    Returns the left margin.

    \sa setLeft()
*/

/*!
    \fn qreal QMarginsF::top() const

    Returns the top margin.

    \sa setTop()
*/

/*!
    \fn qreal QMarginsF::right() const

    Returns the right margin.
*/

/*!
    \fn qreal QMarginsF::bottom() const

    Returns the bottom margin.
*/


/*!
    \fn void QMarginsF::setLeft(qreal aleft)

    Sets the left margin to \a aleft (which must be finite).
*/

/*!
    \fn void QMarginsF::setTop(qreal atop)

    Sets the top margin to \a atop (which must be finite).
*/

/*!
    \fn void QMarginsF::setRight(qreal aright)

    Sets the right margin to \a aright (which must be finite).
*/

/*!
    \fn void QMarginsF::setBottom(qreal abottom)

    Sets the bottom margin to \a abottom (which must be finite).
*/

/*!
    \fn bool QMarginsF::operator==(const QMarginsF &lhs, const QMarginsF &rhs)

    Returns \c true if \a lhs and \a rhs are approximately equal; otherwise
    returns false.

    \warning This function does not check for strict equality; instead,
    it uses a fuzzy comparison to compare the margins.

    \sa qFuzzyCompare
*/

/*!
    \fn bool QMarginsF::operator!=(const QMarginsF &lhs, const QMarginsF &rhs)

    Returns \c true if \a lhs and \a rhs are sufficiently different; otherwise
    returns \c false.

    \warning This function does not check for strict inequality; instead,
    it uses a fuzzy comparison to compare the margins.

    \sa qFuzzyCompare
*/

/*!
    \fn const QMarginsF operator+(const QMarginsF &lhs, const QMarginsF &rhs)
    \relates QMarginsF

    Returns a QMarginsF object that is the sum of the given margins, \a lhs
    and \a rhs; each component is added separately.

    \sa QMarginsF::operator+=(), QMarginsF::operator-=()
*/

/*!
    \fn const QMarginsF operator-(const QMarginsF &lhs, const QMarginsF &rhs)
    \relates QMarginsF

    Returns a QMarginsF object that is formed by subtracting \a rhs from
    \a lhs; each component is subtracted separately.

    \sa QMarginsF::operator+=(), QMarginsF::operator-=()
*/

/*!
    \fn const QMarginsF operator+(const QMarginsF &lhs, qreal rhs)
    \relates QMarginsF

    Returns a QMarginsF object that is formed by adding \a rhs (which must be
    finite) to each component of \a lhs.

    \sa QMarginsF::operator+=(), QMarginsF::operator-=()
*/

/*!
    \fn const QMarginsF operator+(qreal lhs, const QMarginsF &rhs)
    \relates QMarginsF

    Returns a QMarginsF object that is formed by adding \a lhs (which must be
    finite) to each component of \a rhs.

    \sa QMarginsF::operator+=(), QMarginsF::operator-=()
*/

/*!
    \fn const QMarginsF operator-(const QMarginsF &lhs, qreal rhs)
    \relates QMarginsF

    Returns a QMarginsF object that is formed by subtracting \a rhs (which must
    be finite) from each component of \a lhs.

    \sa QMarginsF::operator+=(), QMarginsF::operator-=()
*/

/*!
    \fn const QMarginsF operator*(const QMarginsF &lhs, qreal rhs)
    \relates QMarginsF
    \overload

    Returns a QMarginsF object that is formed by multiplying each component
    of the given \a lhs margins by finite factor \a rhs.

    \sa QMarginsF::operator*=(), QMarginsF::operator/=()
*/

/*!
    \fn const QMarginsF operator*(qreal lhs, const QMarginsF &rhs)
    \relates QMarginsF
    \overload

    Returns a QMarginsF object that is formed by multiplying each component
    of the given \a lhs margins by finite factor \a rhs.

    \sa QMarginsF::operator*=(), QMarginsF::operator/=()
*/

/*!
    \fn const QMarginsF operator/(const QMarginsF &lhs, qreal rhs)
    \relates QMarginsF
    \overload

    Returns a QMarginsF object that is formed by dividing the components of
    the given \a lhs margins by the given \a rhs divisor.

    The divisor must not be either zero or NaN.

    \sa QMarginsF::operator*=(), QMarginsF::operator/=()
*/

/*!
    \fn QMarginsF operator|(const QMarginsF &m1, const QMarginsF &m2)
    \relates QMarginsF
    \overload

    Returns a QMarginsF object that is formed from the maximum of each
    component of \a m2 and \a m1.

    \sa QMarginsF::operator+=(), QMarginsF::operator-=()

    \since 6.0
*/

/*!
    \fn QMarginsF operator+(const QMarginsF &margins)
    \relates QMarginsF

    Returns a QMargin object that is formed from all components of \a margins.
*/

/*!
    \fn QMarginsF operator-(const QMarginsF &margins)
    \relates QMarginsF

    Returns a QMargin object that is formed by negating all components of \a margins.
*/

/*!
    \fn QMarginsF &QMarginsF::operator+=(const QMarginsF &margins)

    Add each component of \a margins to the respective component of this object
    and returns a reference to it.

    \sa operator-=()
*/

/*!
    \fn QMarginsF &QMarginsF::operator-=(const QMarginsF &margins)

    Subtract each component of \a margins from the respective component of this object
    and returns a reference to it.

    \sa operator+=()
*/

/*!
    \fn QMarginsF &QMarginsF::operator+=(qreal addend)
    \overload

    Adds the given finite \a addend to each component of this object
    and returns a reference to it.

    \sa operator-=()
*/

/*!
    \fn QMarginsF &QMarginsF::operator-=(qreal subtrahend)
    \overload

    Subtracts the given finite \a subtrahend from each component of this object
    and returns a reference to it.

    \sa operator+=()
*/

/*!
    \fn QMarginsF &QMarginsF::operator*=(qreal factor)

    Multiplies each component of this object by the given finite \a factor
    and returns a reference to this object.

    \sa operator/=()
*/

/*!
    \fn QMarginsF &QMarginsF::operator/=(qreal divisor)

    Divides each component of this object by \a divisor and returns a reference
    to this object.

    The \a divisor must not be either zero or NaN.

    \sa operator*=()
*/

/*!
    \fn QMargins QMarginsF::toMargins() const

    Returns an integer-based copy of this margins object.

    Note that the components in the returned margins will be rounded to
    the nearest integer.

    \sa QMarginsF(), QMargins::toMarginsF()
*/

/*!
    \fn bool QMarginsF::qFuzzyCompare(const QMarginsF &lhs, const QMarginsF &rhs)
    \since 6.8

    Returns \c true if \a lhs is approximately equal to \a rhs;
    otherwise returns \c false.
*/

/*!
    \fn bool QMarginsF::qFuzzyIsNull(const QMarginsF &margins)
    \since 6.8

    Returns \c true if all components of margsins \a margins are
    approximately equal to zero; otherwise returns \c false.
*/

/*****************************************************************************
  QMarginsF stream functions
 *****************************************************************************/
#ifndef QT_NO_DATASTREAM
/*!
    \fn QDataStream &operator<<(QDataStream &stream, const QMarginsF &m)
    \relates QMarginsF

    Writes margin \a m to the given \a stream and returns a
    reference to the stream.

    \sa {Serializing Qt Data Types}
*/

QDataStream &operator<<(QDataStream &s, const QMarginsF &m)
{
    s << double(m.left()) << double(m.top()) << double(m.right()) << double(m.bottom());
    return s;
}

/*!
    \fn QDataStream &operator>>(QDataStream &stream, QMarginsF &m)
    \relates QMarginsF

    Reads a margin from the given \a stream into margin \a m
    and returns a reference to the stream.

    \sa {Serializing Qt Data Types}
*/

QDataStream &operator>>(QDataStream &s, QMarginsF &m)
{
    double left, top, right, bottom;
    s >> left;
    s >> top;
    s >> right;
    s >> bottom;
    m = QMarginsF(qreal(left), qreal(top), qreal(right), qreal(bottom));
    return s;
}
#endif // QT_NO_DATASTREAM

#ifndef QT_NO_DEBUG_STREAM
QDebug operator<<(QDebug dbg, const QMarginsF &m)
{
    QDebugStateSaver saver(dbg);
    dbg.nospace();
    dbg << "QMarginsF" << '(';
    QtDebugUtils::formatQMargins(dbg, m);
    dbg << ')';
    return dbg;
}
#endif

QT_END_NAMESPACE
