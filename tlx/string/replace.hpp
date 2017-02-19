/*******************************************************************************
 * tlx/string/replace.hpp
 *
 * Part of tlx - http://panthema.net/tlx
 *
 * Copyright (C) 2007-2017 Timo Bingmann <tb@panthema.net>
 *
 * All rights reserved. Published under the Boost Software License, Version 1.0
 ******************************************************************************/

#ifndef TLX_STRING_REPLACE_HEADER
#define TLX_STRING_REPLACE_HEADER

#include <string>

namespace tlx {

/******************************************************************************/
// replace_first() in-place

/*!
 * Replace only the first occurrence of needle in str. The needle will be
 * replaced with instead, if found. The replacement is done in the given string
 * and a reference to the same is returned.
 *
 * \param str           the string to process
 * \param needle        string to search for in str
 * \param instead       replace needle with instead
 * \return              reference to str
 */
std::string& replace_first(
    std::string* str, const std::string& needle, const std::string& instead);

/*!
 * Replace only the first occurrence of needle in str. The needle will be
 * replaced with instead, if found. The replacement is done in the given string
 * and a reference to the same is returned.
 *
 * \param str           the string to process
 * \param needle        string to search for in str
 * \param instead       replace needle with instead
 * \return              reference to str
 */
std::string& replace_first(
    std::string* str, const std::string& needle, const char* instead);

/*!
 * Replace only the first occurrence of needle in str. The needle will be
 * replaced with instead, if found. The replacement is done in the given string
 * and a reference to the same is returned.
 *
 * \param str           the string to process
 * \param needle        string to search for in str
 * \param instead       replace needle with instead
 * \return              reference to str
 */
std::string& replace_first(
    std::string* str, const char* needle, const std::string& instead);

/*!
 * Replace only the first occurrence of needle in str. The needle will be
 * replaced with instead, if found. The replacement is done in the given string
 * and a reference to the same is returned.
 *
 * \param str           the string to process
 * \param needle        string to search for in str
 * \param instead       replace needle with instead
 * \return              reference to str
 */
std::string& replace_first(
    std::string* str, const char* needle, const char* instead);

/******************************************************************************/
// replace_first_copy() copy

/*!
 * Replace only the first occurrence of needle in str. The needle will be
 * replaced with instead, if found. Returns a copy of the string with the
 * possible replacement.
 *
 * \param str           the string to process
 * \param needle        string to search for in str
 * \param instead       replace needle with instead
 * \return              copy of string possibly with replacement
 */
std::string replace_first_copy(
    const std::string& str,
    const std::string& needle, const std::string& instead);

/*!
 * Replace only the first occurrence of needle in str. The needle will be
 * replaced with instead, if found. Returns a copy of the string with the
 * possible replacement.
 *
 * \param str           the string to process
 * \param needle        string to search for in str
 * \param instead       replace needle with instead
 * \return              copy of string possibly with replacement
 */
std::string replace_first_copy(
    const std::string& str, const std::string& needle, const char* instead);

/*!
 * Replace only the first occurrence of needle in str. The needle will be
 * replaced with instead, if found. Returns a copy of the string with the
 * possible replacement.
 *
 * \param str           the string to process
 * \param needle        string to search for in str
 * \param instead       replace needle with instead
 * \return              copy of string possibly with replacement
 */
std::string replace_first_copy(
    const std::string& str, const char* needle, const std::string& instead);

/*!
 * Replace only the first occurrence of needle in str. The needle will be
 * replaced with instead, if found. Returns a copy of the string with the
 * possible replacement.
 *
 * \param str           the string to process
 * \param needle        string to search for in str
 * \param instead       replace needle with instead
 * \return              copy of string possibly with replacement
 */
std::string replace_first_copy(
    const std::string& str, const char* needle, const char* instead);

/******************************************************************************/
// replace_all() in-place

/*!
 * Replace all occurrences of needle in str. Each needle will be replaced with
 * instead, if found. The replacement is done in the given string and a
 * reference to the same is returned.
 *
 * \param str           the string to process
 * \param needle        string to search for in str
 * \param instead       replace needle with instead
 * \return              reference to str
 */
std::string& replace_all(
    std::string* str, const std::string& needle, const std::string& instead);

/*!
 * Replace all occurrences of needle in str. Each needle will be replaced with
 * instead, if found. The replacement is done in the given string and a
 * reference to the same is returned.
 *
 * \param str           the string to process
 * \param needle        string to search for in str
 * \param instead       replace needle with instead
 * \return              reference to str
 */
std::string& replace_all(
    std::string* str, const std::string& needle, const char* instead);

/*!
 * Replace all occurrences of needle in str. Each needle will be replaced with
 * instead, if found. The replacement is done in the given string and a
 * reference to the same is returned.
 *
 * \param str           the string to process
 * \param needle        string to search for in str
 * \param instead       replace needle with instead
 * \return              reference to str
 */
std::string& replace_all(
    std::string* str, const char* needle, const std::string& instead);

/*!
 * Replace all occurrences of needle in str. Each needle will be replaced with
 * instead, if found. The replacement is done in the given string and a
 * reference to the same is returned.
 *
 * \param str           the string to process
 * \param needle        string to search for in str
 * \param instead       replace needle with instead
 * \return              reference to str
 */
std::string& replace_all(
    std::string* str, const char* needle, const char* instead);

/******************************************************************************/
// replace_all_copy() copy

/*!
 * Replace all occurrences of needle in str. Each needle will be replaced with
 * instead, if found. Returns a copy of the string with possible replacements.
 *
 * \param str           the string to process
 * \param needle        string to search for in str
 * \param instead       replace needle with instead
 * \return              copy of string possibly with replacements
 */
std::string replace_all_copy(
    const std::string& str,
    const std::string& needle, const std::string& instead);

/*!
 * Replace all occurrences of needle in str. Each needle will be replaced with
 * instead, if found. Returns a copy of the string with possible replacements.
 *
 * \param str           the string to process
 * \param needle        string to search for in str
 * \param instead       replace needle with instead
 * \return              copy of string possibly with replacements
 */
std::string replace_all_copy(
    const std::string& str, const std::string& needle, const char* instead);

/*!
 * Replace all occurrences of needle in str. Each needle will be replaced with
 * instead, if found. Returns a copy of the string with possible replacements.
 *
 * \param str           the string to process
 * \param needle        string to search for in str
 * \param instead       replace needle with instead
 * \return              copy of string possibly with replacements
 */
std::string replace_all_copy(
    const std::string& str, const char* needle, const std::string& instead);

/*!
 * Replace all occurrences of needle in str. Each needle will be replaced with
 * instead, if found. Returns a copy of the string with possible replacements.
 *
 * \param str           the string to process
 * \param needle        string to search for in str
 * \param instead       replace needle with instead
 * \return              copy of string possibly with replacements
 */
std::string replace_all_copy(
    const std::string& str, const char* needle, const char* instead);

} // namespace tlx

#endif // !TLX_STRING_REPLACE_HEADER

/******************************************************************************/