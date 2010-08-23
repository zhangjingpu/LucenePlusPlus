/////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2009-2010 Alan Wright. All rights reserved.
// Distributable under the terms of either the Apache License (Version 2.0)
// or the GNU Lesser General Public License.
/////////////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "LetterTokenizer.h"

namespace Lucene
{
    LetterTokenizer::LetterTokenizer(ReaderPtr input) : CharTokenizer(input)
    {
    }
    
    LetterTokenizer::LetterTokenizer(AttributeSourcePtr source, ReaderPtr input) : CharTokenizer(source, input)
    {
    }
    
    LetterTokenizer::LetterTokenizer(AttributeFactoryPtr factory, ReaderPtr input) : CharTokenizer(factory, input)
    {
    }
    
    LetterTokenizer::~LetterTokenizer()
    {
    }
    
    bool LetterTokenizer::isTokenChar(wchar_t c)
    {
        return std::isalpha<wchar_t>(c, std::locale());
    }
}