/*
 * Copyright (c) 2012-2019 Belledonne Communications SARL.
 *
 * This file is part of belle-sip.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
// [The "BSD license"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


/* =============================================================================
 * This is what the grammar programmer asked us to put at the top of every file.
 */

/*
    belle-sip - SIP (RFC3261) library.
    Copyright (C) 2010  Belledonne Communications SARL

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma GCC diagnostic ignored "-Wparentheses"
#pragma GCC diagnostic ignored "-Wunused"


/* End of Header action.
 * =============================================================================
 */

/* -----------------------------------------
 * Include the ANTLR3 generated header file.
 */
#include    "belle_sip_messageLexer.h"
/* ----------------------------------------- */


/** String literals used by belle_sip_messageLexer that we must do things like MATCHS() with.
 *  C will normally just lay down 8 bit characters, and you can use L"xxx" to
 *  get wchar_t, but wchar_t is 16 bits on Windows, which is not UTF32 and so
 *  we perform this little trick of defining the literals as arrays of UINT32
 *  and passing in the address of these.
 */
static ANTLR3_UCHAR	lit_1[]  = { 0x0D, 0x0A,  ANTLR3_STRING_TERMINATOR};





/* MACROS that hide the C interface implementations from the
 * generated code, which makes it a little more understandable to the human eye.
 * I am very much against using C pre-processor macros for function calls and bits
 * of code as you cannot see what is happening when single stepping in debuggers
 * and so on. The exception (in my book at least) is for generated code, where you are
 * not maintaining it, but may wish to read and understand it. If you single step it, you know that input()
 * hides some indirect calls, but is always referring to the input stream. This is
 * probably more readable than ctx->input->istream->input(snarfle0->blarg) and allows me to rejig
 * the runtime interfaces without changing the generated code too often, without
 * confusing the reader of the generated output, who may not wish to know the gory
 * details of the interface inheritance.
 */

#define		CTX	ctx

/* Aids in accessing scopes for grammar programmers
 */
#undef	SCOPE_TYPE
#undef	SCOPE_STACK
#undef	SCOPE_TOP
#define	SCOPE_TYPE(scope)   pbelle_sip_messageLexer_##scope##_SCOPE
#define SCOPE_STACK(scope)  pbelle_sip_messageLexer_##scope##Stack
#define	SCOPE_TOP(scope)    ctx->pbelle_sip_messageLexer_##scope##Top
#define	SCOPE_SIZE(scope)		ctx->pbelle_sip_messageLexer_##scope##Stack_limit
#define SCOPE_INSTANCE(scope, i)	(ctx->SCOPE_STACK(scope)->get(ctx->SCOPE_STACK(scope),i))


/* Macros for accessing things in a lexer
 */
#undef	    LEXER
#undef	    RECOGNIZER
#undef	    RULEMEMO
#undef	    GETCHARINDEX
#undef	    GETLINE
#undef	    GETCHARPOSITIONINLINE
#undef	    EMIT
#undef	    EMITNEW
#undef	    MATCHC
#undef	    MATCHS
#undef	    MATCHRANGE
#undef	    LTOKEN
#undef	    HASFAILED
#undef	    FAILEDFLAG
#undef	    INPUT
#undef	    STRSTREAM
#undef	    LA
#undef	    HASEXCEPTION
#undef	    EXCEPTION
#undef	    CONSTRUCTEX
#undef	    CONSUME
#undef	    LRECOVER
#undef	    MARK
#undef	    REWIND
#undef	    REWINDLAST
#undef	    BACKTRACKING
#undef		MATCHANY
#undef		MEMOIZE
#undef		HAVEPARSEDRULE
#undef		GETTEXT
#undef		INDEX
#undef		SEEK
#undef		PUSHSTREAM
#undef		POPSTREAM
#undef		SETTEXT
#undef		SETTEXT8

#define	    LEXER					ctx->pLexer
#define	    RECOGNIZER			    LEXER->rec
#define		LEXSTATE				RECOGNIZER->state
#define		TOKSOURCE				LEXSTATE->tokSource
#define	    GETCHARINDEX()			LEXER->getCharIndex(LEXER)
#define	    GETLINE()				LEXER->getLine(LEXER)
#define	    GETTEXT()				LEXER->getText(LEXER)
#define	    GETCHARPOSITIONINLINE() LEXER->getCharPositionInLine(LEXER)
#define	    EMIT()					LEXSTATE->type = _type; LEXER->emit(LEXER)
#define	    EMITNEW(t)				LEXER->emitNew(LEXER, t)
#define	    MATCHC(c)				LEXER->matchc(LEXER, c)
#define	    MATCHS(s)				LEXER->matchs(LEXER, s)
#define	    MATCHRANGE(c1,c2)	    LEXER->matchRange(LEXER, c1, c2)
#define	    MATCHANY()				LEXER->matchAny(LEXER)
#define	    LTOKEN  				LEXSTATE->token
#define	    HASFAILED()				(LEXSTATE->failed == ANTLR3_TRUE)
#define	    BACKTRACKING			LEXSTATE->backtracking
#define	    FAILEDFLAG				LEXSTATE->failed
#define	    INPUT					LEXER->input
#define	    STRSTREAM				INPUT
#define		ISTREAM					INPUT->istream
#define		INDEX()					ISTREAM->index(ISTREAM)
#define		SEEK(n)					ISTREAM->seek(ISTREAM, n)
#define	    EOF_TOKEN				&(LEXSTATE->tokSource->eofToken)
#define	    HASEXCEPTION()			(LEXSTATE->error == ANTLR3_TRUE)
#define	    EXCEPTION				LEXSTATE->exception
#define	    CONSTRUCTEX()			RECOGNIZER->exConstruct(RECOGNIZER)
#define	    LRECOVER()				LEXER->recover(LEXER)
#define	    MARK()					ISTREAM->mark(ISTREAM)
#define	    REWIND(m)				ISTREAM->rewind(ISTREAM, m)
#define	    REWINDLAST()			ISTREAM->rewindLast(ISTREAM)
#define		MEMOIZE(ri,si)			RECOGNIZER->memoize(RECOGNIZER, ri, si)
#define		HAVEPARSEDRULE(r)		RECOGNIZER->alreadyParsedRule(RECOGNIZER, r)
#define		PUSHSTREAM(str)			LEXER->pushCharStream(LEXER, str)
#define		POPSTREAM()				LEXER->popCharStream(LEXER)
#define		SETTEXT(str)			LEXSTATE->text = str
#define		SKIP()					LEXSTATE->token = &(TOKSOURCE->skipToken)
#define		USER1					LEXSTATE->user1
#define		USER2					LEXSTATE->user2
#define		USER3					LEXSTATE->user3
#define		CUSTOM					LEXSTATE->custom
#define		RULEMEMO				LEXSTATE->ruleMemo
#define		DBG						RECOGNIZER->debugger

/* If we have been told we can rely on the standard 8 bit or UTF16 input
 * stream, then we can define our macros to use the direct pointers
 * in the input object, which is much faster than indirect calls. This
 * is really only significant to lexers with a lot of fragment rules (which
 * do not place LA(1) in a temporary at the moment) and even then
 * only if there is a lot of input (order of say 1M or so).
 */
#if	defined(ANTLR3_INLINE_INPUT_8BIT) || defined(ANTLR3_INLINE_INPUT_UTF16)

# ifdef	ANTLR3_INLINE_INPUT_8BIT

/* 8 bit character set */

#  define	    NEXTCHAR	((pANTLR3_UINT8)(INPUT->nextChar))
#  define	    DATAP	((pANTLR3_UINT8)(INPUT->data))

# else

#  define	    NEXTCHAR	((pANTLR3_UINT16)(INPUT->nextChar))
#  define	    DATAP	((pANTLR3_UINT16)(INPUT->data))

# endif

# define	    LA(n) ((NEXTCHAR + n) > (DATAP + INPUT->sizeBuf) ? ANTLR3_CHARSTREAM_EOF : (ANTLR3_UCHAR)(*(NEXTCHAR + n - 1)))
# define            CONSUME()                                           \
{                                                                       \
    if        (NEXTCHAR < (DATAP + INPUT->sizeBuf))                     \
    {                                                                   \
        INPUT->charPositionInLine++;                                    \
        if  ((ANTLR3_UCHAR)(*NEXTCHAR) == INPUT->newlineChar)           \
        {                                                               \
            INPUT->line++;                                              \
            INPUT->charPositionInLine        = 0;                       \
            INPUT->currentLine                = (void *)(NEXTCHAR + 1); \
        }                                                               \
        INPUT->nextChar = (void *)(NEXTCHAR + 1);                       \
    }                                                                   \
}

#else

// Pick up the input character by calling the input stream implementation.
//
#define	    CONSUME()   INPUT->istream->consume(INPUT->istream)
#define	    LA(n)       INPUT->istream->_LA(INPUT->istream, n)

#endif

#define		TOKTEXT(tok, txt)				tok, (pANTLR3_UINT8)txt

/* The 4 tokens defined below may well clash with your own #defines or token types. If so
 * then for the present you must use different names for your defines as these are hard coded
 * in the code generator. It would be better not to use such names internally, and maybe
 * we can change this in a forthcoming release. I deliberately do not #undef these
 * here as this will at least give you a redefined error somewhere if they clash.
 */
#define	    UP	    ANTLR3_TOKEN_UP
#define	    DOWN    ANTLR3_TOKEN_DOWN
#define	    EOR	    ANTLR3_TOKEN_EOR
#define	    INVALID ANTLR3_TOKEN_INVALID


/* =============================================================================
 * Functions to create and destroy scopes. First come the rule scopes, followed
 * by the global declared scopes.
 */



/* ============================================================================= */

/* =============================================================================
 * Start of recognizer
 */

/* Forward declare the locally static matching functions we have generated and any predicate functions.
 */
static ANTLR3_INLINE 
 void
	mCOMMON_CHAR    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mHEX_CHAR    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mDIGIT    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mAT    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mAND    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mDOLLARD    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mQMARK    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mEMARK    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mDASH    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mCRLF    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mHTAB    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mOR    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mPERCENT    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mDQUOTE    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mSQUOTE    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mBQUOTE    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mBSLASH    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mLBRACE    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mRBRACE    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mUSCORE    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mTILDE    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mDOT    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mPLUS    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mCOLON    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mSEMI    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mCOMMA    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mLAQUOT    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mRAQUOT    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mRPAREN    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mLPAREN    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mRSBRAQUET    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mLSBRAQUET    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mEQUAL    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mSLASH    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mSTAR    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mSP    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mOCTET    (pbelle_sip_messageLexer ctx);
static ANTLR3_INLINE 
 void
	mTokens    (pbelle_sip_messageLexer ctx);
static void	belle_sip_messageLexerFree(pbelle_sip_messageLexer ctx);

/* =========================================================================
 * Lexer matching rules end.
 * =========================================================================
 */



static void
belle_sip_messageLexerFree  (pbelle_sip_messageLexer ctx)
{
    LEXER->free(LEXER);

    ANTLR3_FREE(ctx);
}

static void
belle_sip_messageLexerReset (pbelle_sip_messageLexer ctx)
{
    RECOGNIZER->reset(RECOGNIZER);
}

/** \brief Name of the grammar file that generated this code
 */
static const char fileName[] = "../grammars/belle_sip_message.g";

/** \brief Return the name of the grammar file that generated this code.
 */
static const char * getGrammarFileName()
{
	return fileName;
}

/** \brief Create a new lexer called belle_sip_messageLexer
 *
 * \param[in]    instream Pointer to an initialized input stream
 * \return
 *     - Success pbelle_sip_messageLexer initialized for the lex start
 *     - Fail NULL
 */
ANTLR3_API pbelle_sip_messageLexer belle_sip_messageLexerNew
(
pANTLR3_INPUT_STREAM
 instream)
{
	// See if we can create a new lexer with the standard constructor
	//
	return belle_sip_messageLexerNewSSD(instream, NULL);
}

/** \brief Create a new lexer called belle_sip_messageLexer
 *
 * \param[in]    instream Pointer to an initialized input stream
 * \param[state] state Previously created shared recognizer stat
 * \return
 *     - Success pbelle_sip_messageLexer initialized for the lex start
 *     - Fail NULL
 */
ANTLR3_API pbelle_sip_messageLexer belle_sip_messageLexerNewSSD
(pANTLR3_INPUT_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state)
{
    pbelle_sip_messageLexer ctx; // Context structure we will build and return

    ctx = (pbelle_sip_messageLexer) ANTLR3_CALLOC(1, sizeof(belle_sip_messageLexer));

    if  (ctx == NULL)
    {
        // Failed to allocate memory for lexer context
        return  NULL;
    }

    /* -------------------------------------------------------------------
     * Memory for basic structure is allocated, now to fill in
     * in base ANTLR3 structures. We initialize the function pointers
     * for the standard ANTLR3 lexer function set, but upon return
     * from here, the programmer may set the pointers to provide custom
     * implementations of each function.
     *
     * We don't use the macros defined in belle_sip_messageLexer.h here so you can get a sense
     * of what goes where.
     */

    /* Create a base lexer, using the supplied input stream
     */
    ctx->pLexer	= antlr3LexerNewStream(ANTLR3_SIZE_HINT, instream, state);

    /* Check that we allocated the memory correctly
     */
    if	(ctx->pLexer == NULL)
    {
		ANTLR3_FREE(ctx);
		return  NULL;
    }
    /* Install the implementation of our belle_sip_messageLexer interface
     */
    ctx->mCOMMON_CHAR	= mCOMMON_CHAR;
    ctx->mHEX_CHAR	= mHEX_CHAR;
    ctx->mDIGIT	= mDIGIT;
    ctx->mAT	= mAT;
    ctx->mAND	= mAND;
    ctx->mDOLLARD	= mDOLLARD;
    ctx->mQMARK	= mQMARK;
    ctx->mEMARK	= mEMARK;
    ctx->mDASH	= mDASH;
    ctx->mCRLF	= mCRLF;
    ctx->mHTAB	= mHTAB;
    ctx->mOR	= mOR;
    ctx->mPERCENT	= mPERCENT;
    ctx->mDQUOTE	= mDQUOTE;
    ctx->mSQUOTE	= mSQUOTE;
    ctx->mBQUOTE	= mBQUOTE;
    ctx->mBSLASH	= mBSLASH;
    ctx->mLBRACE	= mLBRACE;
    ctx->mRBRACE	= mRBRACE;
    ctx->mUSCORE	= mUSCORE;
    ctx->mTILDE	= mTILDE;
    ctx->mDOT	= mDOT;
    ctx->mPLUS	= mPLUS;
    ctx->mCOLON	= mCOLON;
    ctx->mSEMI	= mSEMI;
    ctx->mCOMMA	= mCOMMA;
    ctx->mLAQUOT	= mLAQUOT;
    ctx->mRAQUOT	= mRAQUOT;
    ctx->mRPAREN	= mRPAREN;
    ctx->mLPAREN	= mLPAREN;
    ctx->mRSBRAQUET	= mRSBRAQUET;
    ctx->mLSBRAQUET	= mLSBRAQUET;
    ctx->mEQUAL	= mEQUAL;
    ctx->mSLASH	= mSLASH;
    ctx->mSTAR	= mSTAR;
    ctx->mSP	= mSP;
    ctx->mOCTET	= mOCTET;
    ctx->mTokens	= mTokens;

    /** When the nextToken() call is made to this lexer's pANTLR3_TOKEN_SOURCE
     *  it will call mTokens() in this generated code, and will pass it the ctx
     * pointer of this lexer, not the context of the base lexer, so store that now.
     */
    ctx->pLexer->ctx	    = ctx;

    /**Install the token matching function
     */
    ctx->pLexer->mTokens = (void (*) (void *))(mTokens);

    ctx->getGrammarFileName	= getGrammarFileName;
    ctx->free		= belle_sip_messageLexerFree;
    ctx->reset          = belle_sip_messageLexerReset;


    /* Return the newly built lexer to the caller
     */
    return  ctx;
}
/* =========================================================================
 * Functions to match the lexer grammar defined tokens from the input stream
 */

//   Comes from: 1971:3: ( 'g' .. 'z' | 'G' .. 'Z' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start COMMON_CHAR
 *
 * Looks to match the characters the constitute the token COMMON_CHAR
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mCOMMON_CHAR(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = COMMON_CHAR;


    // ../grammars/belle_sip_message.g:1971:3: ( 'g' .. 'z' | 'G' .. 'Z' )
    // ../grammars/belle_sip_message.g:
    {
        if ( ((LA(1) >= 'G') && (LA(1) <= 'Z')) || ((LA(1) >= 'g') && (LA(1) <= 'z')) )
        {
            CONSUME();
        }
        else
        {
            CONSTRUCTEX();
            EXCEPTION->type         = ANTLR3_MISMATCHED_SET_EXCEPTION;
            EXCEPTION->name         = (void *)ANTLR3_MISMATCHED_SET_NAME;

            LRECOVER();
            goto ruleCOMMON_CHAREx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleCOMMON_CHAREx; /* Prevent compiler warnings */
    ruleCOMMON_CHAREx: ;

}
// $ANTLR end COMMON_CHAR

//   Comes from: 1973:9: ( 'a' .. 'f' | 'A' .. 'F' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start HEX_CHAR
 *
 * Looks to match the characters the constitute the token HEX_CHAR
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mHEX_CHAR(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = HEX_CHAR;


    // ../grammars/belle_sip_message.g:1973:9: ( 'a' .. 'f' | 'A' .. 'F' )
    // ../grammars/belle_sip_message.g:
    {
        if ( ((LA(1) >= 'A') && (LA(1) <= 'F')) || ((LA(1) >= 'a') && (LA(1) <= 'f')) )
        {
            CONSUME();
        }
        else
        {
            CONSTRUCTEX();
            EXCEPTION->type         = ANTLR3_MISMATCHED_SET_EXCEPTION;
            EXCEPTION->name         = (void *)ANTLR3_MISMATCHED_SET_NAME;

            LRECOVER();
            goto ruleHEX_CHAREx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleHEX_CHAREx; /* Prevent compiler warnings */
    ruleHEX_CHAREx: ;

}
// $ANTLR end HEX_CHAR

//   Comes from: 1974:7: ( '0' .. '9' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start DIGIT
 *
 * Looks to match the characters the constitute the token DIGIT
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mDIGIT(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = DIGIT;


    // ../grammars/belle_sip_message.g:1974:7: ( '0' .. '9' )
    // ../grammars/belle_sip_message.g:
    {
        if ( ((LA(1) >= '0') && (LA(1) <= '9')) )
        {
            CONSUME();
        }
        else
        {
            CONSTRUCTEX();
            EXCEPTION->type         = ANTLR3_MISMATCHED_SET_EXCEPTION;
            EXCEPTION->name         = (void *)ANTLR3_MISMATCHED_SET_NAME;

            LRECOVER();
            goto ruleDIGITEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleDIGITEx; /* Prevent compiler warnings */
    ruleDIGITEx: ;

}
// $ANTLR end DIGIT

//   Comes from: 1975:3: ( '@' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start AT
 *
 * Looks to match the characters the constitute the token AT
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mAT(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = AT;


    // ../grammars/belle_sip_message.g:1975:3: ( '@' )
    // ../grammars/belle_sip_message.g:1975:5: '@'
    {
        MATCHC('@');
        if  (HASEXCEPTION())
        {
            goto ruleATEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleATEx; /* Prevent compiler warnings */
    ruleATEx: ;

}
// $ANTLR end AT

//   Comes from: 1976:4: ( '&' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start AND
 *
 * Looks to match the characters the constitute the token AND
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mAND(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = AND;


    // ../grammars/belle_sip_message.g:1976:4: ( '&' )
    // ../grammars/belle_sip_message.g:1976:6: '&'
    {
        MATCHC('&');
        if  (HASEXCEPTION())
        {
            goto ruleANDEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleANDEx; /* Prevent compiler warnings */
    ruleANDEx: ;

}
// $ANTLR end AND

//   Comes from: 1977:8: ( '$' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start DOLLARD
 *
 * Looks to match the characters the constitute the token DOLLARD
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mDOLLARD(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = DOLLARD;


    // ../grammars/belle_sip_message.g:1977:8: ( '$' )
    // ../grammars/belle_sip_message.g:1977:10: '$'
    {
        MATCHC('$');
        if  (HASEXCEPTION())
        {
            goto ruleDOLLARDEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleDOLLARDEx; /* Prevent compiler warnings */
    ruleDOLLARDEx: ;

}
// $ANTLR end DOLLARD

//   Comes from: 1978:6: ( '?' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start QMARK
 *
 * Looks to match the characters the constitute the token QMARK
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mQMARK(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = QMARK;


    // ../grammars/belle_sip_message.g:1978:6: ( '?' )
    // ../grammars/belle_sip_message.g:1978:8: '?'
    {
        MATCHC('?');
        if  (HASEXCEPTION())
        {
            goto ruleQMARKEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleQMARKEx; /* Prevent compiler warnings */
    ruleQMARKEx: ;

}
// $ANTLR end QMARK

//   Comes from: 1979:6: ( '!' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start EMARK
 *
 * Looks to match the characters the constitute the token EMARK
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mEMARK(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = EMARK;


    // ../grammars/belle_sip_message.g:1979:6: ( '!' )
    // ../grammars/belle_sip_message.g:1979:8: '!'
    {
        MATCHC('!');
        if  (HASEXCEPTION())
        {
            goto ruleEMARKEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleEMARKEx; /* Prevent compiler warnings */
    ruleEMARKEx: ;

}
// $ANTLR end EMARK

//   Comes from: 1980:5: ( '-' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start DASH
 *
 * Looks to match the characters the constitute the token DASH
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mDASH(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = DASH;


    // ../grammars/belle_sip_message.g:1980:5: ( '-' )
    // ../grammars/belle_sip_message.g:1980:7: '-'
    {
        MATCHC('-');
        if  (HASEXCEPTION())
        {
            goto ruleDASHEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleDASHEx; /* Prevent compiler warnings */
    ruleDASHEx: ;

}
// $ANTLR end DASH

//   Comes from: 1981:7: ( '\\r\\n' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start CRLF
 *
 * Looks to match the characters the constitute the token CRLF
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mCRLF(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = CRLF;


    // ../grammars/belle_sip_message.g:1981:7: ( '\\r\\n' )
    // ../grammars/belle_sip_message.g:1981:9: '\\r\\n'
    {
        MATCHS(lit_1);
        if  (HASEXCEPTION())
        {
            goto ruleCRLFEx;
        }




        {
             USER1 = (int)((char*)ctx->pLexer->input->currentLine - (char*)ctx->pLexer->input->data); /*GETCHARINDEX()*/;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleCRLFEx; /* Prevent compiler warnings */
    ruleCRLFEx: ;

}
// $ANTLR end CRLF

//   Comes from: 1982:7: ( '\t' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start HTAB
 *
 * Looks to match the characters the constitute the token HTAB
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mHTAB(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = HTAB;


    // ../grammars/belle_sip_message.g:1982:7: ( '\t' )
    // ../grammars/belle_sip_message.g:1982:9: '\t'
    {
        MATCHC(0x9);
        if  (HASEXCEPTION())
        {
            goto ruleHTABEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleHTABEx; /* Prevent compiler warnings */
    ruleHTABEx: ;

}
// $ANTLR end HTAB

//   Comes from: 1983:4: ( '|' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start OR
 *
 * Looks to match the characters the constitute the token OR
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mOR(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = OR;


    // ../grammars/belle_sip_message.g:1983:4: ( '|' )
    // ../grammars/belle_sip_message.g:1983:6: '|'
    {
        MATCHC('|');
        if  (HASEXCEPTION())
        {
            goto ruleOREx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleOREx; /* Prevent compiler warnings */
    ruleOREx: ;

}
// $ANTLR end OR

//   Comes from: 1984:8: ( '%' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start PERCENT
 *
 * Looks to match the characters the constitute the token PERCENT
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mPERCENT(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = PERCENT;


    // ../grammars/belle_sip_message.g:1984:8: ( '%' )
    // ../grammars/belle_sip_message.g:1984:10: '%'
    {
        MATCHC('%');
        if  (HASEXCEPTION())
        {
            goto rulePERCENTEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto rulePERCENTEx; /* Prevent compiler warnings */
    rulePERCENTEx: ;

}
// $ANTLR end PERCENT

//   Comes from: 1985:9: ( '\"' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start DQUOTE
 *
 * Looks to match the characters the constitute the token DQUOTE
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mDQUOTE(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = DQUOTE;


    // ../grammars/belle_sip_message.g:1985:9: ( '\"' )
    // ../grammars/belle_sip_message.g:1985:11: '\"'
    {
        MATCHC('"');
        if  (HASEXCEPTION())
        {
            goto ruleDQUOTEEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleDQUOTEEx; /* Prevent compiler warnings */
    ruleDQUOTEEx: ;

}
// $ANTLR end DQUOTE

//   Comes from: 1986:9: ( '\\'' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start SQUOTE
 *
 * Looks to match the characters the constitute the token SQUOTE
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mSQUOTE(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = SQUOTE;


    // ../grammars/belle_sip_message.g:1986:9: ( '\\'' )
    // ../grammars/belle_sip_message.g:1986:11: '\\''
    {
        MATCHC('\'');
        if  (HASEXCEPTION())
        {
            goto ruleSQUOTEEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleSQUOTEEx; /* Prevent compiler warnings */
    ruleSQUOTEEx: ;

}
// $ANTLR end SQUOTE

//   Comes from: 1987:7: ( '`' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start BQUOTE
 *
 * Looks to match the characters the constitute the token BQUOTE
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mBQUOTE(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = BQUOTE;


    // ../grammars/belle_sip_message.g:1987:7: ( '`' )
    // ../grammars/belle_sip_message.g:1987:9: '`'
    {
        MATCHC('`');
        if  (HASEXCEPTION())
        {
            goto ruleBQUOTEEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleBQUOTEEx; /* Prevent compiler warnings */
    ruleBQUOTEEx: ;

}
// $ANTLR end BQUOTE

//   Comes from: 1988:7: ( '\\\\' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start BSLASH
 *
 * Looks to match the characters the constitute the token BSLASH
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mBSLASH(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = BSLASH;


    // ../grammars/belle_sip_message.g:1988:7: ( '\\\\' )
    // ../grammars/belle_sip_message.g:1988:9: '\\\\'
    {
        MATCHC('\\');
        if  (HASEXCEPTION())
        {
            goto ruleBSLASHEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleBSLASHEx; /* Prevent compiler warnings */
    ruleBSLASHEx: ;

}
// $ANTLR end BSLASH

//   Comes from: 1989:7: ( '{' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start LBRACE
 *
 * Looks to match the characters the constitute the token LBRACE
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mLBRACE(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = LBRACE;


    // ../grammars/belle_sip_message.g:1989:7: ( '{' )
    // ../grammars/belle_sip_message.g:1989:9: '{'
    {
        MATCHC('{');
        if  (HASEXCEPTION())
        {
            goto ruleLBRACEEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleLBRACEEx; /* Prevent compiler warnings */
    ruleLBRACEEx: ;

}
// $ANTLR end LBRACE

//   Comes from: 1990:7: ( '}' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start RBRACE
 *
 * Looks to match the characters the constitute the token RBRACE
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mRBRACE(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = RBRACE;


    // ../grammars/belle_sip_message.g:1990:7: ( '}' )
    // ../grammars/belle_sip_message.g:1990:9: '}'
    {
        MATCHC('}');
        if  (HASEXCEPTION())
        {
            goto ruleRBRACEEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleRBRACEEx; /* Prevent compiler warnings */
    ruleRBRACEEx: ;

}
// $ANTLR end RBRACE

//   Comes from: 1991:7: ( '_' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start USCORE
 *
 * Looks to match the characters the constitute the token USCORE
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mUSCORE(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = USCORE;


    // ../grammars/belle_sip_message.g:1991:7: ( '_' )
    // ../grammars/belle_sip_message.g:1991:9: '_'
    {
        MATCHC('_');
        if  (HASEXCEPTION())
        {
            goto ruleUSCOREEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleUSCOREEx; /* Prevent compiler warnings */
    ruleUSCOREEx: ;

}
// $ANTLR end USCORE

//   Comes from: 1992:6: ( '~' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start TILDE
 *
 * Looks to match the characters the constitute the token TILDE
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mTILDE(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = TILDE;


    // ../grammars/belle_sip_message.g:1992:6: ( '~' )
    // ../grammars/belle_sip_message.g:1992:8: '~'
    {
        MATCHC('~');
        if  (HASEXCEPTION())
        {
            goto ruleTILDEEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleTILDEEx; /* Prevent compiler warnings */
    ruleTILDEEx: ;

}
// $ANTLR end TILDE

//   Comes from: 1993:4: ( '.' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start DOT
 *
 * Looks to match the characters the constitute the token DOT
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mDOT(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = DOT;


    // ../grammars/belle_sip_message.g:1993:4: ( '.' )
    // ../grammars/belle_sip_message.g:1993:6: '.'
    {
        MATCHC('.');
        if  (HASEXCEPTION())
        {
            goto ruleDOTEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleDOTEx; /* Prevent compiler warnings */
    ruleDOTEx: ;

}
// $ANTLR end DOT

//   Comes from: 1996:5: ( '+' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start PLUS
 *
 * Looks to match the characters the constitute the token PLUS
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mPLUS(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = PLUS;


    // ../grammars/belle_sip_message.g:1996:5: ( '+' )
    // ../grammars/belle_sip_message.g:1996:7: '+'
    {
        MATCHC('+');
        if  (HASEXCEPTION())
        {
            goto rulePLUSEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto rulePLUSEx; /* Prevent compiler warnings */
    rulePLUSEx: ;

}
// $ANTLR end PLUS

//   Comes from: 1998:3: ( ':' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start COLON
 *
 * Looks to match the characters the constitute the token COLON
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mCOLON(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = COLON;


    // ../grammars/belle_sip_message.g:1998:3: ( ':' )
    // ../grammars/belle_sip_message.g:1998:5: ':'
    {
        MATCHC(':');
        if  (HASEXCEPTION())
        {
            goto ruleCOLONEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleCOLONEx; /* Prevent compiler warnings */
    ruleCOLONEx: ;

}
// $ANTLR end COLON

//   Comes from: 2001:3: ( ';' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start SEMI
 *
 * Looks to match the characters the constitute the token SEMI
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mSEMI(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = SEMI;


    // ../grammars/belle_sip_message.g:2001:3: ( ';' )
    // ../grammars/belle_sip_message.g:2001:5: ';'
    {
        MATCHC(';');
        if  (HASEXCEPTION())
        {
            goto ruleSEMIEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleSEMIEx; /* Prevent compiler warnings */
    ruleSEMIEx: ;

}
// $ANTLR end SEMI

//   Comes from: 2004:3: ( ',' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start COMMA
 *
 * Looks to match the characters the constitute the token COMMA
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mCOMMA(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = COMMA;


    // ../grammars/belle_sip_message.g:2004:3: ( ',' )
    // ../grammars/belle_sip_message.g:2004:5: ','
    {
        MATCHC(',');
        if  (HASEXCEPTION())
        {
            goto ruleCOMMAEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleCOMMAEx; /* Prevent compiler warnings */
    ruleCOMMAEx: ;

}
// $ANTLR end COMMA

//   Comes from: 2007:3: ( '<' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start LAQUOT
 *
 * Looks to match the characters the constitute the token LAQUOT
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mLAQUOT(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = LAQUOT;


    // ../grammars/belle_sip_message.g:2007:3: ( '<' )
    // ../grammars/belle_sip_message.g:2007:5: '<'
    {
        MATCHC('<');
        if  (HASEXCEPTION())
        {
            goto ruleLAQUOTEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleLAQUOTEx; /* Prevent compiler warnings */
    ruleLAQUOTEx: ;

}
// $ANTLR end LAQUOT

//   Comes from: 2010:3: ( '>' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start RAQUOT
 *
 * Looks to match the characters the constitute the token RAQUOT
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mRAQUOT(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = RAQUOT;


    // ../grammars/belle_sip_message.g:2010:3: ( '>' )
    // ../grammars/belle_sip_message.g:2010:5: '>'
    {
        MATCHC('>');
        if  (HASEXCEPTION())
        {
            goto ruleRAQUOTEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleRAQUOTEx; /* Prevent compiler warnings */
    ruleRAQUOTEx: ;

}
// $ANTLR end RAQUOT

//   Comes from: 2014:3: ( ')' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start RPAREN
 *
 * Looks to match the characters the constitute the token RPAREN
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mRPAREN(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = RPAREN;


    // ../grammars/belle_sip_message.g:2014:3: ( ')' )
    // ../grammars/belle_sip_message.g:2014:5: ')'
    {
        MATCHC(')');
        if  (HASEXCEPTION())
        {
            goto ruleRPARENEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleRPARENEx; /* Prevent compiler warnings */
    ruleRPARENEx: ;

}
// $ANTLR end RPAREN

//   Comes from: 2018:3: ( '(' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start LPAREN
 *
 * Looks to match the characters the constitute the token LPAREN
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mLPAREN(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = LPAREN;


    // ../grammars/belle_sip_message.g:2018:3: ( '(' )
    // ../grammars/belle_sip_message.g:2018:5: '('
    {
        MATCHC('(');
        if  (HASEXCEPTION())
        {
            goto ruleLPARENEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleLPARENEx; /* Prevent compiler warnings */
    ruleLPARENEx: ;

}
// $ANTLR end LPAREN

//   Comes from: 2021:3: ( ']' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start RSBRAQUET
 *
 * Looks to match the characters the constitute the token RSBRAQUET
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mRSBRAQUET(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = RSBRAQUET;


    // ../grammars/belle_sip_message.g:2021:3: ( ']' )
    // ../grammars/belle_sip_message.g:2021:5: ']'
    {
        MATCHC(']');
        if  (HASEXCEPTION())
        {
            goto ruleRSBRAQUETEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleRSBRAQUETEx; /* Prevent compiler warnings */
    ruleRSBRAQUETEx: ;

}
// $ANTLR end RSBRAQUET

//   Comes from: 2025:3: ( '[' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start LSBRAQUET
 *
 * Looks to match the characters the constitute the token LSBRAQUET
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mLSBRAQUET(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = LSBRAQUET;


    // ../grammars/belle_sip_message.g:2025:3: ( '[' )
    // ../grammars/belle_sip_message.g:2025:5: '['
    {
        MATCHC('[');
        if  (HASEXCEPTION())
        {
            goto ruleLSBRAQUETEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleLSBRAQUETEx; /* Prevent compiler warnings */
    ruleLSBRAQUETEx: ;

}
// $ANTLR end LSBRAQUET

//   Comes from: 2029:3: ( '=' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start EQUAL
 *
 * Looks to match the characters the constitute the token EQUAL
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mEQUAL(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = EQUAL;


    // ../grammars/belle_sip_message.g:2029:3: ( '=' )
    // ../grammars/belle_sip_message.g:2029:5: '='
    {
        MATCHC('=');
        if  (HASEXCEPTION())
        {
            goto ruleEQUALEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleEQUALEx; /* Prevent compiler warnings */
    ruleEQUALEx: ;

}
// $ANTLR end EQUAL

//   Comes from: 2033:3: ( '/' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start SLASH
 *
 * Looks to match the characters the constitute the token SLASH
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mSLASH(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = SLASH;


    // ../grammars/belle_sip_message.g:2033:3: ( '/' )
    // ../grammars/belle_sip_message.g:2033:5: '/'
    {
        MATCHC('/');
        if  (HASEXCEPTION())
        {
            goto ruleSLASHEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleSLASHEx; /* Prevent compiler warnings */
    ruleSLASHEx: ;

}
// $ANTLR end SLASH

//   Comes from: 2037:3: ( '*' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start STAR
 *
 * Looks to match the characters the constitute the token STAR
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mSTAR(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = STAR;


    // ../grammars/belle_sip_message.g:2037:3: ( '*' )
    // ../grammars/belle_sip_message.g:2037:5: '*'
    {
        MATCHC('*');
        if  (HASEXCEPTION())
        {
            goto ruleSTAREx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleSTAREx; /* Prevent compiler warnings */
    ruleSTAREx: ;

}
// $ANTLR end STAR

//   Comes from: 2040:3: ( ' ' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start SP
 *
 * Looks to match the characters the constitute the token SP
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mSP(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = SP;


    // ../grammars/belle_sip_message.g:2040:3: ( ' ' )
    // ../grammars/belle_sip_message.g:2040:5: ' '
    {
        MATCHC(' ');
        if  (HASEXCEPTION())
        {
            goto ruleSPEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleSPEx; /* Prevent compiler warnings */
    ruleSPEx: ;

}
// $ANTLR end SP

//   Comes from: 2042:7: ( . )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start OCTET
 *
 * Looks to match the characters the constitute the token OCTET
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mOCTET(pbelle_sip_messageLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = OCTET;


    // ../grammars/belle_sip_message.g:2042:7: ( . )
    // ../grammars/belle_sip_message.g:2042:9: .
    {
        MATCHANY();
        if  (HASEXCEPTION())
        {
            goto ruleOCTETEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleOCTETEx; /* Prevent compiler warnings */
    ruleOCTETEx: ;

}
// $ANTLR end OCTET

/** This is the entry point in to the lexer from an object that
 *  wants to generate the next token, such as a pCOMMON_TOKEN_STREAM
 */
static void
mTokens(pbelle_sip_messageLexer ctx)
{
    {
        //  ../grammars/belle_sip_message.g:1:8: ( COMMON_CHAR | HEX_CHAR | DIGIT | AT | AND | DOLLARD | QMARK | EMARK | DASH | CRLF | HTAB | OR | PERCENT | DQUOTE | SQUOTE | BQUOTE | BSLASH | LBRACE | RBRACE | USCORE | TILDE | DOT | PLUS | COLON | SEMI | COMMA | LAQUOT | RAQUOT | RPAREN | LPAREN | RSBRAQUET | LSBRAQUET | EQUAL | SLASH | STAR | SP | OCTET )

        ANTLR3_UINT32 alt1;

        alt1=37;

        {
            int LA1_0 = LA(1);
            if ( (((LA1_0 >= 'G') && (LA1_0 <= 'Z')) || ((LA1_0 >= 'g') && (LA1_0 <= 'z'))))
            {
                alt1=1;
            }
            else if ( (((LA1_0 >= 'A') && (LA1_0 <= 'F')) || ((LA1_0 >= 'a') && (LA1_0 <= 'f'))))
            {
                alt1=2;
            }
            else if ( (((LA1_0 >= '0') && (LA1_0 <= '9'))))
            {
                alt1=3;
            }
            else if ( (LA1_0 == '@'))
            {
                alt1=4;
            }
            else if ( (LA1_0 == '&'))
            {
                alt1=5;
            }
            else if ( (LA1_0 == '$'))
            {
                alt1=6;
            }
            else if ( (LA1_0 == '?'))
            {
                alt1=7;
            }
            else if ( (LA1_0 == '!'))
            {
                alt1=8;
            }
            else if ( (LA1_0 == '-'))
            {
                alt1=9;
            }
            else if ( (LA1_0 == '\r'))
            {
                switch ( LA(2) )
                {
                case '\n':
                	{
                		alt1=10;
                	}
                    break;

                default:
                    alt1=37;
                }

            }
            else if ( (LA1_0 == '\t'))
            {
                alt1=11;
            }
            else if ( (LA1_0 == '|'))
            {
                alt1=12;
            }
            else if ( (LA1_0 == '%'))
            {
                alt1=13;
            }
            else if ( (LA1_0 == '"'))
            {
                alt1=14;
            }
            else if ( (LA1_0 == '\''))
            {
                alt1=15;
            }
            else if ( (LA1_0 == '`'))
            {
                alt1=16;
            }
            else if ( (LA1_0 == '\\'))
            {
                alt1=17;
            }
            else if ( (LA1_0 == '{'))
            {
                alt1=18;
            }
            else if ( (LA1_0 == '}'))
            {
                alt1=19;
            }
            else if ( (LA1_0 == '_'))
            {
                alt1=20;
            }
            else if ( (LA1_0 == '~'))
            {
                alt1=21;
            }
            else if ( (LA1_0 == '.'))
            {
                alt1=22;
            }
            else if ( (LA1_0 == '+'))
            {
                alt1=23;
            }
            else if ( (LA1_0 == ':'))
            {
                alt1=24;
            }
            else if ( (LA1_0 == ';'))
            {
                alt1=25;
            }
            else if ( (LA1_0 == ','))
            {
                alt1=26;
            }
            else if ( (LA1_0 == '<'))
            {
                alt1=27;
            }
            else if ( (LA1_0 == '>'))
            {
                alt1=28;
            }
            else if ( (LA1_0 == ')'))
            {
                alt1=29;
            }
            else if ( (LA1_0 == '('))
            {
                alt1=30;
            }
            else if ( (LA1_0 == ']'))
            {
                alt1=31;
            }
            else if ( (LA1_0 == '['))
            {
                alt1=32;
            }
            else if ( (LA1_0 == '='))
            {
                alt1=33;
            }
            else if ( (LA1_0 == '/'))
            {
                alt1=34;
            }
            else if ( (LA1_0 == '*'))
            {
                alt1=35;
            }
            else if ( (LA1_0 == ' '))
            {
                alt1=36;
            }
            else if ( (((LA1_0 >= 0x0000) && (LA1_0 <= '\b')) || ((LA1_0 >= '\n') && (LA1_0 <= '\f')) || ((LA1_0 >= 0x000E) && (LA1_0 <= 0x001F)) || LA1_0 == '#' || LA1_0 == '^' || ((LA1_0 >= 0x007F) && (LA1_0 <= 0xFFFF))))
            {
                alt1=37;
            }
            else
            {

                CONSTRUCTEX();
                EXCEPTION->type         = ANTLR3_NO_VIABLE_ALT_EXCEPTION;
                EXCEPTION->message      = (void *)"";
                EXCEPTION->decisionNum  = 1;
                EXCEPTION->state        = 0;


                goto ruleTokensEx;

            }
        }
        switch (alt1)
        {
    	case 1:
    	    // ../grammars/belle_sip_message.g:1:10: COMMON_CHAR
    	    {
    	        /* 1:10: COMMON_CHAR */
    	        mCOMMON_CHAR(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 2:
    	    // ../grammars/belle_sip_message.g:1:22: HEX_CHAR
    	    {
    	        /* 1:22: HEX_CHAR */
    	        mHEX_CHAR(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 3:
    	    // ../grammars/belle_sip_message.g:1:31: DIGIT
    	    {
    	        /* 1:31: DIGIT */
    	        mDIGIT(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 4:
    	    // ../grammars/belle_sip_message.g:1:37: AT
    	    {
    	        /* 1:37: AT */
    	        mAT(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 5:
    	    // ../grammars/belle_sip_message.g:1:40: AND
    	    {
    	        /* 1:40: AND */
    	        mAND(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 6:
    	    // ../grammars/belle_sip_message.g:1:44: DOLLARD
    	    {
    	        /* 1:44: DOLLARD */
    	        mDOLLARD(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 7:
    	    // ../grammars/belle_sip_message.g:1:52: QMARK
    	    {
    	        /* 1:52: QMARK */
    	        mQMARK(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 8:
    	    // ../grammars/belle_sip_message.g:1:58: EMARK
    	    {
    	        /* 1:58: EMARK */
    	        mEMARK(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 9:
    	    // ../grammars/belle_sip_message.g:1:64: DASH
    	    {
    	        /* 1:64: DASH */
    	        mDASH(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 10:
    	    // ../grammars/belle_sip_message.g:1:69: CRLF
    	    {
    	        /* 1:69: CRLF */
    	        mCRLF(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 11:
    	    // ../grammars/belle_sip_message.g:1:74: HTAB
    	    {
    	        /* 1:74: HTAB */
    	        mHTAB(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 12:
    	    // ../grammars/belle_sip_message.g:1:79: OR
    	    {
    	        /* 1:79: OR */
    	        mOR(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 13:
    	    // ../grammars/belle_sip_message.g:1:82: PERCENT
    	    {
    	        /* 1:82: PERCENT */
    	        mPERCENT(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 14:
    	    // ../grammars/belle_sip_message.g:1:90: DQUOTE
    	    {
    	        /* 1:90: DQUOTE */
    	        mDQUOTE(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 15:
    	    // ../grammars/belle_sip_message.g:1:97: SQUOTE
    	    {
    	        /* 1:97: SQUOTE */
    	        mSQUOTE(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 16:
    	    // ../grammars/belle_sip_message.g:1:104: BQUOTE
    	    {
    	        /* 1:104: BQUOTE */
    	        mBQUOTE(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 17:
    	    // ../grammars/belle_sip_message.g:1:111: BSLASH
    	    {
    	        /* 1:111: BSLASH */
    	        mBSLASH(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 18:
    	    // ../grammars/belle_sip_message.g:1:118: LBRACE
    	    {
    	        /* 1:118: LBRACE */
    	        mLBRACE(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 19:
    	    // ../grammars/belle_sip_message.g:1:125: RBRACE
    	    {
    	        /* 1:125: RBRACE */
    	        mRBRACE(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 20:
    	    // ../grammars/belle_sip_message.g:1:132: USCORE
    	    {
    	        /* 1:132: USCORE */
    	        mUSCORE(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 21:
    	    // ../grammars/belle_sip_message.g:1:139: TILDE
    	    {
    	        /* 1:139: TILDE */
    	        mTILDE(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 22:
    	    // ../grammars/belle_sip_message.g:1:145: DOT
    	    {
    	        /* 1:145: DOT */
    	        mDOT(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 23:
    	    // ../grammars/belle_sip_message.g:1:149: PLUS
    	    {
    	        /* 1:149: PLUS */
    	        mPLUS(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 24:
    	    // ../grammars/belle_sip_message.g:1:154: COLON
    	    {
    	        /* 1:154: COLON */
    	        mCOLON(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 25:
    	    // ../grammars/belle_sip_message.g:1:160: SEMI
    	    {
    	        /* 1:160: SEMI */
    	        mSEMI(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 26:
    	    // ../grammars/belle_sip_message.g:1:165: COMMA
    	    {
    	        /* 1:165: COMMA */
    	        mCOMMA(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 27:
    	    // ../grammars/belle_sip_message.g:1:171: LAQUOT
    	    {
    	        /* 1:171: LAQUOT */
    	        mLAQUOT(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 28:
    	    // ../grammars/belle_sip_message.g:1:178: RAQUOT
    	    {
    	        /* 1:178: RAQUOT */
    	        mRAQUOT(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 29:
    	    // ../grammars/belle_sip_message.g:1:185: RPAREN
    	    {
    	        /* 1:185: RPAREN */
    	        mRPAREN(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 30:
    	    // ../grammars/belle_sip_message.g:1:192: LPAREN
    	    {
    	        /* 1:192: LPAREN */
    	        mLPAREN(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 31:
    	    // ../grammars/belle_sip_message.g:1:199: RSBRAQUET
    	    {
    	        /* 1:199: RSBRAQUET */
    	        mRSBRAQUET(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 32:
    	    // ../grammars/belle_sip_message.g:1:209: LSBRAQUET
    	    {
    	        /* 1:209: LSBRAQUET */
    	        mLSBRAQUET(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 33:
    	    // ../grammars/belle_sip_message.g:1:219: EQUAL
    	    {
    	        /* 1:219: EQUAL */
    	        mEQUAL(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 34:
    	    // ../grammars/belle_sip_message.g:1:225: SLASH
    	    {
    	        /* 1:225: SLASH */
    	        mSLASH(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 35:
    	    // ../grammars/belle_sip_message.g:1:231: STAR
    	    {
    	        /* 1:231: STAR */
    	        mSTAR(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 36:
    	    // ../grammars/belle_sip_message.g:1:236: SP
    	    {
    	        /* 1:236: SP */
    	        mSP(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 37:
    	    // ../grammars/belle_sip_message.g:1:239: OCTET
    	    {
    	        /* 1:239: OCTET */
    	        mOCTET(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;

        }
    }


    goto ruleTokensEx; /* Prevent compiler warnings */
ruleTokensEx: ;
}

/* =========================================================================
 * Lexer matching rules end.
 * =========================================================================
 */
/* End of Lexer code
 * ================================================
 * ================================================
 */


/* End of code
 * =============================================================================
 */
